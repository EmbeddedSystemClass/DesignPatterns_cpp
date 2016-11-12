#include <iostream>
#include <iomanip>
#include <string>
#include "Calculator.h"
#include "GetSum0to10.h"
#include "GetSum3to7.h"
#include "Batch.h"

using namespace std;

/**
 * Story:
 *  Create one calculator(receiver), and several sets of operations(ConcreteCommand)
 *  main function(Client) contains these operations into batch(invoker)
**/
void testCommand()
{
	cout << endl << "<<Test Command>>" << endl;
	
	/* Generate receiver */
	Calculator calc(0);
	
	/* Generate commands */
	GetSum0to10 getSum0to10(calc);
	GetSum3to7 getSum3to7(calc);

	Batch batch;
	batch.addCommand(&getSum0to10);
	batch.addCommand(&getSum3to7);
	batch.executeAll();
}
