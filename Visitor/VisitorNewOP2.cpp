/**
 * VisitorNewOP2.cpp
 * Concrete Visitor class
**/
#include <iostream>
#include <stdlib.h>
#include "VisitorNewOP2.h"

using namespace std;

void VisitorNewOP2::visitMyInt(MyInt *myInt)
{
	cout << myInt->m_a / myInt->m_b << endl;
}

void VisitorNewOP2::visitMyDouble(MyDouble *myDouble)
{
	cout << myDouble->m_a / myDouble->m_b << endl;
}

