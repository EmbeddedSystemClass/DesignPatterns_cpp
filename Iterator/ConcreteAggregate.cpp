/**
 * ConcreteAggregate.cpp
 * ConcreteAggregate class
**/
#include <iostream>
#include <stdlib.h>
#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

using namespace std;

ConcreteAggregate::ConcreteAggregate(int max)
	: m_max(max), m_count(0)
{
	m_correction = new Person*[m_max];
}

ConcreteAggregate::~ConcreteAggregate()
{
	for( int i = 0; i < m_count; i++ ) {
		delete m_correction[i];
	}
	delete m_correction;
}

IIterator* ConcreteAggregate::createIterator()
{
	return new ConcreteIterator(this);
}

bool ConcreteAggregate::push(Person *person)
{
	if( m_count < m_max ) {
		m_correction[m_count++] = person;
		return true;
	} 
	return false;
}

Person * ConcreteAggregate::pop()
{
	if( m_count > 0 ) {
		return m_correction[--m_count];
	} else {
		return NULL;
	}
}

Person * ConcreteAggregate::front()
{
	if( m_count > 0 ) {
		return m_correction[m_count-1];
	} else {
		return NULL;
	}
}

Person* ConcreteAggregate::getAt(int index)
{
	if( index < m_count && index >= 0 ) {
		return m_correction[index];
	} else {
		return NULL;
	}
}

int ConcreteAggregate::getCount()
{
	return m_count;
}