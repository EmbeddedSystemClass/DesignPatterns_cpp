#include <iostream>
#include <iomanip>
#include <string>
#include <list>

#include "./NewClass.h"
#include "./Adapter1.h"
#include "./Adapter2.h"

using namespace std;

/**
 * Story:
 *  Call printTime function which accepts new interface(NewClass) with old classes
**/
void printTime(NewClass *newClass);
void testAdapter()
{
	NewClass *newClass =  new Adapter1();
	printTime(newClass);

	newClass =  new Adapter2();
	printTime(newClass);
}

void printTime(NewClass *newClass)
{
	int msec = newClass->getTimeMilliSecond();
	cout << "time = " << msec << " [ms]" << endl;
}
