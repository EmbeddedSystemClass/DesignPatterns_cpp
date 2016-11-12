/**
 * StockBase.h
 * Subject abstract class
**/
#ifndef __STOCK_BASE__
#define __STOCK_BASE__

#include "IInvestor.h"

class StockBase
{
	private:
		int m_id;
		std::string m_symbol;
		double m_price;
		std::list<IInvestor*> m_investors;  // observers

	public:
		std::string getSymbol();
		//string setSymbol(string symbol);
		double getPrice();
		void setPrice(double price);

	private:

	protected:
		StockBase(const std::string &symbol, double price);

	public:
		void attach(IInvestor *investor);
		void detach(IInvestor *investor);
		void notify();
};

#endif	//__STOCK_BASE__
