#pragma once

// Includes
#include "Utility.h"
#include "CDDSManager.h"

class CApp
{
public:
	// Attributes
	CDDSManager m_ddsManager;

	std::vector<std::string> m_arguments;

	// Methods
	CApp( int argCountIn, char* argsIn[] );
	virtual ~CApp();

	virtual void Run() = 0;
	virtual void HandleSignal( int signalIdIn ) = 0;
};
