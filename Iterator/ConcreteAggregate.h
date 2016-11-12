/**
 * ConcreteAggregate.h
 * ConcreteAggregate class
**/
#ifndef __CONCRETE_AGGREGATE__
#define __CONCRETE_AGGREGATE__

#include "IAggregate.h"
#include "Person.h"

class ConcreteAggregate : IAggregate
{
	private:
		const int m_max;
		int m_count;
		Person **m_correction;
	public:
	private:
	public:
		ConcreteAggregate(int max);
		~ConcreteAggregate();
		virtual IIterator* createIterator();
		bool push(Person *person);
		Person* pop();
		Person* front();
		Person* getAt(int index);
		int getCount();
};

#endif	//__CONCRETE_AGGREGATE__
