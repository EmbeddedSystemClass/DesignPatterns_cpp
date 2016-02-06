/**
 * HandlerNull.cpp
 * Concrete Handler class to handle null
**/
#include <iostream>
#include <stdlib.h>
#include "HandlerNull.h"

using namespace std;

void HandlerNull::handleRequest(const char* difficulty)
{
	if( difficulty != NULL ) {
		if( m_successor == NULL ) {
			cout << "cannot handle the request" << endl;
		} else {
			m_successor->handleRequest(difficulty);
		}
	} else {
		/* this class handles the request */
		cout << "null pointer was handled" << endl;
	}
}

