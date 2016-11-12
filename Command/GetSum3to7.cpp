/**
 * GetSum3to7.h
 * Concrete Command class which knows an operation (Calculator(Receiver) class and parameters) 
*/
#include <iostream>
#include "GetSum3to7.h"

using namespace std;

GetSum3to7::GetSum3to7(Calculator &calculator)
	:Command(calculator)
{
}

void GetSum3to7::execute()
{
	m_calculator.setValue(0);
	for( int i = 3; i <= 7; i++ ){
		m_calculator.add(i);
	}
	cout << "The result of GetSum3to7 is " << m_calculator.getValue() << endl;
}
