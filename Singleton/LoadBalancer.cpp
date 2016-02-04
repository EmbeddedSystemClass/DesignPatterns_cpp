/**
 * LoadBalancer.cpp
 * Singleton class
 * Assign server considering load balance
**/
#include <iostream>
#include <stdlib.h>
#include "LoadBalancer.h"

using namespace std;

LoadBalancer LoadBalancer::s_loadBalancer;

LoadBalancer::LoadBalancer()
{
	;
}

LoadBalancer* LoadBalancer::getInstance()
{
	// note: if using "new", need to implement exclusive lock
	// note: static LoadBalancer s_loadBalancer; can be here
	return &s_loadBalancer;
}

int LoadBalancer::assignServer()
{
	return rand() % MAX_SERVER;
}
