/**
 * Stock.h
 * Subject class
**/
#ifndef __STOCK__
#define __STOCK__

#include "StockBase.h"

class Stock : public StockBase
{
	public:
		Stock(const std::string &symbol, double price);
};

#endif	//__STOCK__
