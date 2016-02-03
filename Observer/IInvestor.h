/**
 * IInvestor.h
 * Observer interface class
**/

#ifndef __IINVESTOR__
#define __IINVESTOR__

class StockBase;

class IInvestor
{
	public:
		virtual void notify(StockBase *stockBase) = 0;
};

#endif	//__IINVESTOR__

