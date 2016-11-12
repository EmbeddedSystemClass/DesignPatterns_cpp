/**
 * GetSum0to10.h
 * Concrete Command class which knows an operation (Calculator(Receiver) class and parameters) 
*/
#include <iostream>
#include "GetSum0to10.h"

using namespace std;

GetSum0to10::GetSum0to10(Calculator &calculator)
	:Command(calculator)
{
}

void GetSum0to10::execute()
{
	m_calculator.setValue(0);
	for( int i = 0; i <= 10; i++ ){
		m_calculator.add(i);
	}
	cout << "The result of GetSum0to10 is " << m_calculator.getValue() << endl;
}