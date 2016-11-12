#include <iostream>
#include <iomanip>
#include <string>
#include "Person.h"
#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

using namespace std;

/**
 * Story:
 *  List of integer
**/
void testIterator()
{
	cout << endl << "<<Test Iterator>>" << endl;
	Person p1("Alice", 20);
	Person p2("Bob", 30);
	Person p3("Charlie", 40);

	ConcreteAggregate list(10);
	list.push(&p1);
	list.push(&p2);
	list.push(&p3);

	IIterator *concreteIterator = list.createIterator();
	Person *p;
	while( ( p = concreteIterator->next()) != NULL ) {
		cout << p->m_name << endl;
	}
	delete concreteIterator;

	// note
	// the following way also works.
	// however, depending on implementation of ConcreteAggregate(how to access each element), you need to modify this implementation
	//  -> iterator hide the represantation and interface of the target correction
	// Also, iterator is useful for irregular access such as accessing only odd index
	for( int i = 0; i < list.getCount(); i++ ){
		cout << list.getAt(i)->m_name << endl;
	}

}

