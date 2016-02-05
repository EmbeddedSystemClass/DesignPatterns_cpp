#include <iostream>
#include <iomanip>
#include <string>
#include <list>

#include "./Adapter/NewClass.h"
#include "./Adapter/Adapter1.h"
#include "./Adapter/Adapter2.h"

using namespace std;

/**
 * Story:
 *  Assign a server 10 times using load balancer (LoadBalancer)
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
