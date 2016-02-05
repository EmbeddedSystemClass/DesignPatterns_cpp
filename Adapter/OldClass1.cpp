/**
 * OldClass1.cpp
 * Adaptee class
 * Class which has old/different interface
**/
#include <iostream>
#include <stdlib.h>
#include "OldClass1.h"

double OldClass1::getTimeSecond()
{
	double ret = 12.345;
	return ret;
}
