/**
 * IAggregate.h
 * IAggregate class (interface of aggregate)
**/
#ifndef __I_AGGREGATE__
#define __I_AGGREGATE__

#include "IIterator.h"

class IAggregate
{
	public:
		virtual IIterator* createIterator() = 0;
};

#endif	//__I_AGGREGATE__
