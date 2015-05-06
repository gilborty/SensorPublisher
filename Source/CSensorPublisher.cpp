// Includes
#include "CSensorPublisher.h"

CSensorPublisher::CSensorPublisher( int argCountIn, char* argsIn[] )
	: CApp( argCountIn, argsIn )
	, m_quitApplication( false )
{
}

CSensorPublisher::~CSensorPublisher()
{
}

void CSensorPublisher::Run()
{
}

void CSensorPublisher::HandleSignal(int signalIdIn) {
}
