/**
 * Stock.cpp
 * Subject class
**/

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include "Stock.h"

using namespace std;


Stock::Stock(const string &symbol, double price)
	: StockBase(symbol, price)
{
	//cout << "Stock Constructore" << endl;
}

