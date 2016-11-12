/**
 * GetSum3to7.h
 * Concrete Command class which knows an operation (Calculator(Receiver) class and parameters) 
*/
#ifndef __GET_SUM_3TO7__
#define __GET_SUM_3TO7__
#include "Command.h"

class GetSum3to7 : public Command
{
	public:
		GetSum3to7(Calculator &calculator);
		virtual void execute();
};

#endif	//__GET_SUM_3TO7__
