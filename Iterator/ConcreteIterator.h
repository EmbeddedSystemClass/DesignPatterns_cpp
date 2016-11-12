/**
 * ConcreteIterator.h
 * ConcreteIterator class
**/
#ifndef __CONCRETE_ITERATOR__
#define __CONCRETE_ITERATOR__

#include "Person.h"
#include "IIterator.h"
#include "ConcreteAggregate.h"

class ConcreteIterator : public IIterator
{
	private:
		int m_index;	// ConcreteIterator keeps track of the current position
		ConcreteAggregate* mp_concreteAggregate;
	public:
		ConcreteIterator(ConcreteAggregate* concreteAggregate);
		virtual Person* next();
};

#endif	//__CONCRETE_ITERATOR__
