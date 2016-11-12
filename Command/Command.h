/**
 * Command.h
 * Command class which ceclares an interface for an operation
*/
#ifndef __COMMAND__
#define __COMMAND__
#include "Calculator.h"

class Command
{
	protected:
		Calculator &m_calculator;
	public:
		Command(Calculator &calculator)
			:m_calculator(calculator)
		{
		}
		
		virtual void execute() = 0;
};

#endif	//__COMMAND__
