/**
 * HandlerNull.h
 * Concrete Handler class to handle null
**/
#ifndef __HANDLER_NULL__
#define __HANDLER_NULL__

#include "Handler.h"

class HandlerNull : public Handler
{
	public:
		virtual void handleRequest(const char* difficulty);
};

#endif	//__HANDLER_NULL__
