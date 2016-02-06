/**
 * Handler.cpp
 * Handler abstract class
**/
#include <iostream>
#include <stdlib.h>
#include "Handler.h"

using namespace std;

Handler::Handler()
{
	m_successor = NULL;
}

Handler* Handler::setNext(Handler* handler)
{
	m_successor = handler;
	return handler;
}

