/**
 * CalcSum3to7.h
 * Concrete Command class which knows an operation (Calculator(Receiver) class and parameters) 
*/
#include <iostream>
#include "CalcSum3to7.h"

using namespace std;

CalcSum3to7::CalcSum3to7(Calculator &calculator)
	:CalcCommand(calculator)
{
}

void CalcSum3to7::execute()
{
	m_calculator.setValue(0);
	for( int i = 3; i <= 7; i++ ){
		m_calculator.add(i);
	}
	cout << "The result of CalcSum3to7 is " << m_calculator.getValue() << endl;
}
