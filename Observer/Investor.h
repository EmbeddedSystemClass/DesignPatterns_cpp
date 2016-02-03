/**
 * Investor.h
 * Observer class
**/

#ifndef __INVESTOR__
#define __INVESTOR__

#include "IInvestor.h"

class Investor : public IInvestor
{
	private:
		int m_id;
		std::string m_name;
	public:
	private:
	public:
		Investor(const std::string &name);
		virtual void notify(StockBase *stockBase);	// override
};

#endif	//__INVESTOR__
