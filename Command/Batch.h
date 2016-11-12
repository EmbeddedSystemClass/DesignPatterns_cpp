/**
 * Batch.h
 * Invoker class which contains and calls commands
 * (able to enable undo/redo/log)
*/
#ifndef __BATCH__
#define __BATCH__
#include <list>
#include "Command.h"

class Batch
{
	private:
		std::list<Command*> m_commandList;

	public:
		void addCommand(Command *command);
		void executeAll();
};

#endif	//__BATCH__
