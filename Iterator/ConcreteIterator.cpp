/**
 * ConcreteIterator.h
 * ConcreteIterator class
**/
#include <iostream>
#include <stdlib.h>
#include "ConcreteIterator.h"

using namespace std;

ConcreteIterator::ConcreteIterator(ConcreteAggregate* concreteAggregate)
	:m_index(0), mp_concreteAggregate(concreteAggregate)
{

}

Person* ConcreteIterator::next()
{
	if(m_index < mp_concreteAggregate->getCount()) {
		Person *person = mp_concreteAggregate->getAt(m_index);
		m_index++;
		return person;
	} else {
		return NULL;
	}
}
