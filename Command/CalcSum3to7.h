/**
 * CalcSum3to7.h
 * Concrete Command class which knows an operation (Calculator(Receiver) class and parameters) 
*/
#ifndef __CALC_SUM_3TO7__
#define __CALC_SUM_3TO7__
#include "CalcCommand.h"

class CalcSum3to7 : public CalcCommand
{
	public:
		CalcSum3to7(Calculator &calculator);
		virtual void execute();
};

#endif	//__CALC_SUM_3TO7__
