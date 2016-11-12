#include <iostream>
#include <iomanip>
#include <string>
#include "Calculator.h"
#include "CalcSum0to10.h"
#include "CalcSum3to7.h"
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
	CalcSum0to10 calcSum0to10(calc);
	CalcSum3to7 calcSum3to7(calc);

	Batch batch;
	batch.addCommand(&calcSum0to10);
	batch.addCommand(&calcSum3to7);
	batch.executeAll();
}
