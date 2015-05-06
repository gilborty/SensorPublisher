#include "CDDSManager.h"

CDDSManager::CDDSManager()
{
	LOG( INFO ) << "Initializing DDS Manager...";

	// Load Application and Qos library files
	LoadXMLProfiles();

	// Get the participan factory
	auto factory = DDS::DomainParticipantFactory::get_instance();

	// Register type support for user generated types - Type names are defined in AppLibrary.xml
	factory->register_type_support( example::sensors::TDistance::TypeSupport::register_type, "TDistance" );
	factory->register_type_support( example::sensors::TTemperature::TypeSupport::register_type, "TTemperature" );

	// Create a participant using the profile in AppLibrary.xml
	m_pParticipant = factory->create_participant_from_config( "ExampleParticipantLibrary::SensorPublisher" );

	// Fetch pointers for convenient DDS entity access
	m_pForwardDistanceWriter 		= example::sensors::TDistance::DataWriter::narrow( m_pParticipant->lookup_datawriter_by_name( "MyPublisher::ForwardDistanceWriter" ) );
	m_pInternalTemperatureWriter 	= example::sensors::TTemperature::DataWriter::narrow( m_pParticipant->lookup_datawriter_by_name( "MyPublisher::InternalTemperatureWriter" ) );

	LOG( INFO ) << "DDS Manager Initialized.";

}

CDDSManager::~CDDSManager()
{

}

void CDDSManager::LoadXMLProfiles()
{
	LOG( INFO ) << "Loading DDS Profiles...";

	std::vector<std::string> m_profilePaths;

	// QOS
	m_profilePaths.push_back( "DDS/XML/Qos/RTIUserProfiles.xml" );
	m_profilePaths.push_back( "DDS/XML/Qos/UserProfiles.xml" );

	// Application
	m_profilePaths.push_back( "DDS/XML/Application/AppLibrary.xml" );



	// Update the factory's loaded profiles with those specified here
	SetupFactoryProfiles( m_profilePaths );

	LOG( INFO ) << "Loaded DDS Profiles.";
}

void CDDSManager::SetupFactoryProfiles( const std::vector<std::string>& profilePathsIn )
{
	// Get the factory instance
	auto factory = DDS::DomainParticipantFactory::get_instance();

	// Get the current Factory QOS settings
	DDS::DomainParticipantFactoryQos factoryQos;
	factory->get_qos( factoryQos );

	// Resize so that it can hold our new files
	factoryQos.profile.url_profile.ensure_length( static_cast<DDS::Long>( profilePathsIn.size() ), static_cast<DDS::Long>( profilePathsIn.size() ) );

	// Copy the file paths
	for( size_t i = 0; i < profilePathsIn.size(); ++i )
	{
		factoryQos.profile.url_profile[ i ] = DDS::String_dup( profilePathsIn[ i ].c_str() );
	}

	// Set the new qos
	factory->set_qos( factoryQos );
}
