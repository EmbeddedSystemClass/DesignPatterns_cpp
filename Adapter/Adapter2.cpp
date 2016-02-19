/**
 * Adapter2.cpp
 * Adapter class
**/
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <memory.h>	// for memcpy
#include "Adapter2.h"

using namespace std;

int Adapter2::getTimeMilliSecond()
{
	string retOld = m_oldClass.getTimeSecond_string();
	//int ret = stod(retOld)*1000;
	char temp[64];
	memcpy(temp, retOld.c_str(), retOld.length());
	temp[retOld.length()] = '\0';
	int ret = atof(temp)*1000;
	return ret;
}
