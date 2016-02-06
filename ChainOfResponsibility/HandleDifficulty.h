/**
 * HandleDifficulty.h
 * Concrete Handler class to handle difficulty
**/
#ifndef __HANDLER_DIFFICULTY__
#define __HANDLER_DIFFICULTY__

#include "Handler.h"

class HandleDifficulty : public Handler
{
	private:
		int m_level;
	public:
		HandleDifficulty(int level);
		virtual void handleRequest(const char* difficulty);
};

#endif	//__HANDLER_DIFFICULTY__
