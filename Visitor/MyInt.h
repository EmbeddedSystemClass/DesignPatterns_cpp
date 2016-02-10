/**
 * MyInt.h
 * Concrete Element class
**/
#ifndef __MY_INT__
#define __MY_INT__

#include "INumber.h"

class MyInt : public INumber
{
	public:
		int m_a;
		int m_b;
	public:
		MyInt(int a, int b);
		void add();
		void sub();

		//
		void acceptVisitor(IVisitor *visitor);
};

#endif	//__MY_INT__
