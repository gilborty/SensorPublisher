#pragma once

// Includes
#include "CApp.h"

class CSensorPublisher : public CApp
{
public:
	// Pointers

	// Attributes
	bool m_quitApplication;

	// Methods
	CSensorPublisher( int argCountIn, char* argsIn[] );
	virtual ~CSensorPublisher();

	virtual void Run();
	virtual void HandleSignal( int signalIdIn );
};
