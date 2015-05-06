#pragma once

// Includes
#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include "Utility.h"

// DDS User Generated Types
#include "DDS/Generated/SensorsSupport.h"

class CDDSManager
{
public:
	// DDS Entities
	example::sensors::TDistance::DataWriter 	*m_pForwardDistanceWriter;
	example::sensors::TTemperature::DataWriter 	*m_pInternalTemperatureWriter;

	// Methods
	CDDSManager();
	virtual ~CDDSManager();

private:
	DDS::DomainParticipant *m_pParticipant;

	void LoadXMLProfiles();
	void SetupFactoryProfiles( const std::vector<std::string>& profilePathsIn );
};
