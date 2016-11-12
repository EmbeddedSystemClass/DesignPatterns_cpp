/**
 * StockBase.cpp
 * Subject abstract class
**/

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include "StockBase.h"

using namespace std;

string StockBase::getSymbol() {
	return m_symbol;
}

double StockBase::getPrice() {
	return m_price;
}

void StockBase::setPrice(double price) {
	if( price != m_price) {
		m_price = price;
		notify();
	}
}

StockBase::StockBase(const string &symbol, double price)
{
	//cout << "StockBase Constructore" << endl;

	static int s_stockId = 0;
	m_id = s_stockId++;
	m_symbol = symbol;
	m_price = price;
}

void StockBase::attach(IInvestor *investor)
{
	m_investors.push_front(investor);
}

void StockBase::detach(IInvestor *investor)
{
	for( list<IInvestor*>::iterator itr = m_investors.begin(); itr != m_investors.end();  ) {
		if( *itr == investor ) {
			itr = m_investors.erase(itr);
		} else {
			itr++;
		}
	}
}

void StockBase::notify()
{
	for( list<IInvestor*>::iterator itr = m_investors.begin(); itr != m_investors.end(); itr++ ) {
		(*itr)->notify(this);
	}
}
