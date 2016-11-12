/**
 * CalcCommand.h
 * Command class which ceclares an interface for an operation
*/
#ifndef __CALC_COMMAND__
#define __CALC_COMMAND__
#include "Calculator.h"

class CalcCommand
{
	protected:
		Calculator &m_calculator;
	public:
		CalcCommand(Calculator &calculator)
			:m_calculator(calculator)
		{
		}
		
		virtual void execute() = 0;
};

#endif	//__CALC_COMMAND__
