/**
 * Adapter1.cpp
 * Adapter class
**/
#include <iostream>
#include <stdlib.h>
#include "Adapter1.h"

int Adapter1::getTimeMilliSecond()
{
	double retOld = m_oldClass.getTimeSecond();
	int ret = retOld*1000;
	return ret;
}
