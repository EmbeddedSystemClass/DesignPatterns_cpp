#include <iostream>
#include <iomanip>
#include <string>

#include "MyInt.h"
#include "MyDouble.h"
#include "VisitorNewOP1.h"
#include "VisitorNewOP2.h"

using namespace std;

/**
 * Story:
 *  At first, there were two classes (MyInt, MyDouble), which has two operations (add, sub)
 *  Then, I want to add new COMMON operations (mul, div) without changing the structure of the classes
**/
void testVisitor()
{
	cout << endl << "<<Test Visitor>>" << endl;

	MyInt *p_myInt =  new MyInt(8, 4);
	p_myInt->add();
	p_myInt->sub();

	MyDouble *p_myDouble =  new MyDouble(8.8, 4.4);
	p_myDouble->add();
	p_myDouble->sub();

	/* added new operations */
	VisitorNewOP1* visitorNewOp1 = new VisitorNewOP1();
	VisitorNewOP2* visitorNewOp2 = new VisitorNewOP2();
	
	/*
	p_myInt->acceptVisitor(visitorNewOp1);
	p_myInt->acceptVisitor(visitorNewOp2);
	p_myDouble->acceptVisitor(visitorNewOp1);
	p_myDouble->acceptVisitor(visitorNewOp2);
	*/

	/* >> more practical usage >> */
	INumber* p_numberList[10];
	p_numberList[0] = p_myInt;
	p_numberList[1] = p_myDouble;
	p_numberList[2] = NULL;
	for( int i = 0; i < 10; i++ ){
		INumber* p_number = p_numberList[i];
		if( p_number == NULL ) return;
		cout << "Do added OP 1 for " << i <<"th class" << endl;
		p_number->acceptVisitor(visitorNewOp1);
		cout << "Do added OP 2 for " << i <<"th class" << endl;
		p_number->acceptVisitor(visitorNewOp2);
	}

	delete p_myInt;
	delete p_myDouble;
	delete visitorNewOp1;
	delete visitorNewOp2;
}

