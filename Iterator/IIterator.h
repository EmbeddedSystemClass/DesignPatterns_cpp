/**
 * IIterator.h
 * IIterator class (interface of iterator)
**/
#ifndef __I_ITERATOR__
#define __I_ITERATOR__

#include "Person.h"

class IIterator
{
	public:
		virtual ~IIterator(){}
		virtual Person* next() = 0;
};

#endif	//__I_ITERATOR__
