/**
 * Investor.cpp
 * Observer class
**/

#include <iostream>
#include <string>
#include <list>
#include "Investor.h"
#include "StockBase.h"

using namespace std;

Investor::Investor(const std::string &name)
{
	static int s_investorId = 0;
	m_id = s_investorId++;
	m_name = name;
}

void Investor::notify(StockBase *stockBase)
{
	cout << "notified " << m_name << " of " << stockBase->getSymbol() << "'s changed to " << stockBase->getPrice() << endl;
}
