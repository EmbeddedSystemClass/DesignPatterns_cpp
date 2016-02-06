#include <iostream>
#include <iomanip>
#include <string>

#include "Handler.h"
#include "HandlerNull.h"
#include "HandleDifficulty.h"

using namespace std;

/**
 * Story:
 *  Create null handler and normal handler with level
 *  these handler will handle requests of several difficulties
**/
void testChainOfResponsibility()
{
	cout << endl << "<<Test Chain of Responsibility>>" << endl;

	Handler* handler1 = new HandlerNull();
	Handler* handler2 = new HandleDifficulty(3);
	Handler* handler3 = new HandleDifficulty(7);
	handler1->setNext(handler2)->setNext(handler3);

	handler1->handleRequest(NULL);
	handler1->handleRequest("2");
	handler1->handleRequest("5");
	handler1->handleRequest("10");
}

