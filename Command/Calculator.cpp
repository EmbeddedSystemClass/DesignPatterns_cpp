/**
 * Calculator.cpp
 * Receiver class which performs operations associated with requests
*/
#include <iostream>
#include "Calculator.h"

using namespace std;

Calculator::Calculator(const int value)
	:m_value(value)
{
}

void Calculator::setValue(const int value)
{
	m_value = value;
}

void Calculator::add(const int x)
{
	m_value += x;
}

void Calculator::sub(const int x)
{
	m_value -= x;
}

int Calculator::getValue()
{
	return m_value;
}
