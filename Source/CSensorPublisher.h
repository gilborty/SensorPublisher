#pragma once

// Includes
#include "CApp.h"

// Typedefs
typedef std::unordered_map<DDS::Condition*, std::function<void( DDS::Condition* )>> TConditionHandlerMap;

class CSensorPublisher : public CApp
{
public:
	// Pointers
	std::unique_ptr<DDS::WaitSet> 			m_pWaitSet;
	std::unique_ptr<DDS::GuardCondition> 	m_pSigintCondition;

	// Attributes
	TConditionHandlerMap 					m_waitSetHandlers;
	std::chrono::steady_clock::time_point	m_nextExecutionTime;
	bool 									m_quitApplication;

	const int 								m_kUpdateRate_hz 	= 100;
	const int 								m_kUpdatePeriod_ns 	= static_cast<int>( 1000000000 / m_kUpdateRate_hz );

	// Random number stuff for generating sensor values - C++11 is good, m'kay?
	std::random_device 						m_randomDevice;
	std::mt19937 							m_mtRandomGen;
	std::uniform_real_distribution<float> 	m_distanceDistribution;
	std::uniform_real_distribution<float> 	m_temperatureDistribution;

	// Methods
	CSensorPublisher( int argCountIn, char* argsIn[] );
	virtual ~CSensorPublisher();

	virtual void Run();
	virtual void HandleSignal( int signalIdIn );

	void InitializeWaitSet();
	void HandleWaitSetConditions();
	void UpdateNextExecutionTime();

	void PublishSensorUpdates();

};
