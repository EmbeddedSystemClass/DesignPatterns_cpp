/**
 * GetSum0to10.h
 * Concrete Command class which knows an operation (Calculator(Receiver) class and parameters) 
*/
#ifndef __GET_SUM_0TO10__
#define __GET_SUM_0TO10__
#include "Command.h"

class GetSum0to10 : public Command
{
	public:
		GetSum0to10(Calculator &calculator);
		virtual void execute();
};

#endif	//__GET_SUM_0TO10__
