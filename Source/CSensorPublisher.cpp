// Includes
#include "CSensorPublisher.h"

CSensorPublisher::CSensorPublisher( int argCountIn, char* argsIn[] )
	: CApp( argCountIn, argsIn )
	, m_pWaitSet( util::make_unique<DDS::WaitSet>() )
	, m_pSigintCondition( util::make_unique<DDS::GuardCondition>() )
	, m_nextExecutionTime( std::chrono::steady_clock::now() )
	, m_quitApplication( false )
	, m_mtRandomGen( m_randomDevice() )
	, m_distanceDistribution( 0.0f, 10.0f )
	, m_temperatureDistribution( 27.0f, 35.0f )
{
}

CSensorPublisher::~CSensorPublisher()
{
}

void CSensorPublisher::Run()
{
	LOG( INFO ) << "Application Started.";

	// First set up the WaitSet by registering callbacks to all conditions we'd like to handle
	InitializeWaitSet();

	// Our application logic goes here.
	// For this example program, we won't be doing much besides writing mock sensor data and handling SIGINT signals (ctrl + c)
	while( m_quitApplication == false )
	{
		// Get next update time for our fixed-rate loop
		UpdateNextExecutionTime();

		// Handle any triggered conditions (received samples, guard conditions, etc)
		HandleWaitSetConditions();

		// Write some mock data
		PublishSensorUpdates();

		// Sleep until the next execution period
		std::this_thread::sleep_until( m_nextExecutionTime );
	}

	LOG( INFO ) << "Application Ended.";
}

void CSensorPublisher::UpdateNextExecutionTime()
{
	// This function is designed to calculate timepoints that progress at a fixed rate.
	// It allows for timepoints to be missed, in the event that prior code took unexpectedly long, and will correct to the next appropriate timepoint in the series.

	// Get time elapsed since last execution
	auto elapsed = std::chrono::steady_clock::now() - m_nextExecutionTime;

	// If the time elapsed is greater than our desired execution time, we may need to play catch up since we've missed one or more cycles
	if( elapsed > std::chrono::nanoseconds( m_kUpdatePeriod_ns ) )
	{
		// First find out how many nanoseconds difference there is between now and the last desired execution time
		auto diff = std::chrono::duration_cast<std::chrono::nanoseconds>( ( std::chrono::steady_clock::now() - m_nextExecutionTime ) ).count();

		// From that, derive the number of cycles we missed.
		auto missedCycles = diff / m_kUpdatePeriod_ns;

		// Finally, calculate the next execution time which is aligned to our pulse pattern
		// We add one to missedCycles because we always want to progress at least one period, even if we missed no cycles.
		m_nextExecutionTime += std::chrono::nanoseconds( ( missedCycles + 1 ) * m_kUpdatePeriod_ns );
	}
	else
	{
		// Set our next execution time one period further in the future
		m_nextExecutionTime += std::chrono::nanoseconds( m_kUpdatePeriod_ns );
	}
}

void CSensorPublisher::HandleSignal(int signalIdIn)
{
	// Print a new line to offset ctrl+c text
	std::cout << std::endl;

	LOG( INFO ) << "SIGINT Detected: Cleaning up gracefully...";

	// Trigger the guard condition. This will ultimately break our application loop.
	m_pSigintCondition->set_trigger_value( true );
}

void CSensorPublisher::PublishSensorUpdates()
{
	// Write random distance and temperature samples using our random distributions
	auto distSample = example::sensors::TDistance{ 0, m_distanceDistribution( m_mtRandomGen ) };
	auto tempSample = example::sensors::TTemperature{ 0, m_temperatureDistribution( m_mtRandomGen ) };

	m_ddsManager.m_pForwardDistanceWriter->write( distSample, DDS::HANDLE_NIL );
	m_ddsManager.m_pInternalTemperatureWriter->write( tempSample, DDS::HANDLE_NIL );
}


//////////////////////////////////////////////////////////////////
// WaitSet related functions /////////////////////////////////////

void CSensorPublisher::InitializeWaitSet()
{
	// Set up the Guard Condition
	auto sigintHandlerCallback = [this]( DDS::Condition* conditionIn )
	{
		DDS::GuardCondition *condition = (DDS::GuardCondition*)conditionIn;

		// If the condition was set to true, quit the application
		if( condition->get_trigger_value() == true )
		{
			m_quitApplication = true;
		}
	};


	// Normally, you would register other status/read/etc conditions you'd like to handle here


	// Register callbacks in our handler map
	m_waitSetHandlers.insert( std::make_pair( m_pSigintCondition.get(), sigintHandlerCallback ) );

	// Attach the conditions to the WaitSet object
	m_pWaitSet->attach_condition( m_pSigintCondition.get() );
}



void CSensorPublisher::HandleWaitSetConditions()
{
	DDS::ConditionSeq activeConditions;
	DDS::ReturnCode_t ret;

	// Set timeout to 0, since we are using a different mechanism to drive our loop update rate.
	DDS::Duration_t timeout{ 0, 0 };

	// Wait for active conditions
	ret = m_pWaitSet->wait( activeConditions, timeout );

	if( ret != DDS::RETCODE_OK )
	{
		// Timed out. Do nothing, as we expect this to happen frequently.
	}
	else
	{
		// Some condition was triggered, so we loop through the active conditions
		for( int i = 0; i < activeConditions.length(); ++i )
		{
			try
			{
				// Call the appropriate handler for each active condition
				// Warning: Make sure you registered a callback for every status mask you enabled in the WaitSet. The try-catch will let you know if you didn't.
				m_waitSetHandlers.at( (DDS::Condition*)activeConditions[ i ] )( activeConditions[ i ] );
			}
			catch( const std::exception &e )
			{
				LOG( ERROR ) << "Exception handling WaitSet: " << e.what();
			}
		}
	}
}
