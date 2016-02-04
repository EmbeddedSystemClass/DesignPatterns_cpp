#include <iostream>
#include <iomanip>
#include <string>
#include <list>

#include "./Singleton/LoadBalancer.h"

using namespace std;

/**
 * Story:
 *  Assign a server 10 times using load balancer (LoadBalancer)
**/
void testSingleton()
{
	cout << endl << "<<Test Singleton>>" << endl;
	LoadBalancer* loadBalancer;
	loadBalancer = LoadBalancer::getInstance();

	for( int i = 0; i < 10; i++ ) {
		cout << "Server " << loadBalancer->assignServer() << " is assigned" << endl;
	}
}

