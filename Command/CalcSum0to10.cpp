/**
 * CalcSum0to10.h
 * Concrete Command class which knows an operation (Calculator(Receiver) class and parameters) 
*/
#include <iostream>
#include "CalcSum0to10.h"

using namespace std;

CalcSum0to10::CalcSum0to10(Calculator &calculator)
	:CalcCommand(calculator)
{
}

void CalcSum0to10::execute()
{
	m_calculator.setValue(0);
	for( int i = 0; i <= 10; i++ ){
		m_calculator.add(i);
	}
	cout << "The result of CalcSum0to10 is " << m_calculator.getValue() << endl;
}