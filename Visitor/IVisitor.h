/**
 * IVisitor.h
 * Visitor Interface
**/
#ifndef __IVISITOR__
#define __IVISITOR__

#include "MyInt.h"
#include "MyDouble.h"

class IVisitor
{
	public:
		virtual ~IVisitor(){}
		virtual void visitMyInt(MyInt *myInt) = 0;
		virtual void visitMyDouble(MyDouble *MyDouble) = 0;
};

#endif	//__IVISITOR__
