#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <stdio.h>

using namespace std;

void testObserver();
void testSingleton();
void testAdapter();
void testChainOfResponsibility();
void testVisitor();
void testCommand();
void testIterator();
int main()
{
	testObserver();
	testSingleton();
	testAdapter();
	testChainOfResponsibility();
	testVisitor();
	testCommand();
	testIterator();

	getchar();
	return 0;
}

