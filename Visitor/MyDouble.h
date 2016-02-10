/**
 * MyDouble.h
 * Concrete Element class
**/
#ifndef __MY_DOUBLE__
#define __MY_DOUBLE__

#include "INumber.h"

class MyDouble : public INumber
{
	public:
		double m_a;
		double m_b;
	public:
		MyDouble(double a, double b);
		void add();
		void sub();

		//
		void acceptVisitor(IVisitor *visitor);
};

#endif	//__MY_DOUBLE__
