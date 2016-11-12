/**
 * Batch.h
 * Invoker class which contains and calls commands
 * (able to enable undo/redo/log)
*/
#ifndef __BATCH__
#define __BATCH__
#include <list>
#include "CalcCommand.h"

class Batch
{
	private:
		std::list<CalcCommand*> m_commandList;

	public:
		void addCommand(CalcCommand *command);
		void executeAll();
};

#endif	//__BATCH__
