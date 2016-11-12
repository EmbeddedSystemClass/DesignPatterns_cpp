/**
 * CalcSum0to10.h
 * Concrete Command class which knows an operation (Calculator(Receiver) class and parameters) 
*/
#ifndef __CALC_SUM_0TO10__
#define __CALC_SUM_0TO10__
#include "CalcCommand.h"

class CalcSum0to10 : public CalcCommand
{
	public:
		CalcSum0to10(Calculator &calculator);
		virtual void execute();
};

#endif	//__CALC_SUM_0TO10__
