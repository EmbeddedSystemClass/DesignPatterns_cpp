/**
 * VisitorNewOP1.cpp
 * Concrete Visitor class
**/
#include <iostream>
#include <stdlib.h>
#include "VisitorNewOP1.h"

using namespace std;

void VisitorNewOP1::visitMyInt(MyInt *myInt)
{
	cout << myInt->m_a * myInt->m_b << endl;
}

void VisitorNewOP1::visitMyDouble(MyDouble *myDouble)
{
	cout << myDouble->m_a * myDouble->m_b << endl;
}

