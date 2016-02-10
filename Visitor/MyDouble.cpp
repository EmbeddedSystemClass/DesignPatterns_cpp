/**
 * MyDouble.cpp
 * Concrete Element class
**/
#include <iostream>
#include <stdlib.h>
#include "MyDouble.h"
#include "IVisitor.h"

using namespace std;

MyDouble::MyDouble(double a, double b)
{
	m_a = a;
	m_b = b;
}

void MyDouble::add()
{
	cout << m_a + m_b << endl;
}

void MyDouble::sub()
{
	cout << m_a - m_b << endl;
}


void MyDouble::acceptVisitor(IVisitor *visitor)
{
	visitor->visitMyDouble(this);
}
