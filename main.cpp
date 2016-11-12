#include <iostream>
#include <iomanip>
#include <string>
#include <list>

using namespace std;

void testObserver();
void testSingleton();
void testAdapter();
void testChainOfResponsibility();
void testVisitor();
void testCommand();
int main()
{
	testObserver();
	testSingleton();
	testAdapter();
	testChainOfResponsibility();
	testVisitor();
	testCommand();

	int temp;	cin >> temp;
	return 0;
}

