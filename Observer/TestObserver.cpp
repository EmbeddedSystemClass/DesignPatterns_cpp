#include <iostream>
#include <iomanip>
#include <string>
#include <list>

#include "Investor.h"
#include "Stock.h"

using namespace std;


/**
 * Story:
 *  Create a stock, and 3 investors
 *  3 investors buy the stock
 *  When the stock price changed, the investors get notification
**/
void testObserver()
{
	cout << endl << "<<Test Singleton>>" << endl;
	Stock ibm("Ibm", 10.12);
	Investor *alice = new Investor("Alice");
	Investor *bob = new Investor("Bob");
	Investor *charlie = new Investor("Charlie");

	ibm.attach(alice);
	ibm.attach(bob);
	ibm.attach(charlie);

	ibm.setPrice(20);
	cout << endl;

	ibm.detach(bob);

	ibm.setPrice(40);
	cout << endl;

	delete alice;
	delete bob;
	delete charlie;
}

