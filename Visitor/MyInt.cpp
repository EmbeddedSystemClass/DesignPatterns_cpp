/**
 * MyInt.cpp
 * Concrete Element class
**/
#include <iostream>
#include <stdlib.h>
#include "MyInt.h"
#include "IVisitor.h"

using namespace std;

MyInt::MyInt(int a, int b)
{
	m_a = a;
	m_b = b;
}

void MyInt::add()
{
	cout << m_a + m_b << endl;
}

void MyInt::sub()
{
	cout << m_a - m_b << endl;
}


void MyInt::acceptVisitor(IVisitor *visitor)
{
	visitor->visitMyInt(this);
}
