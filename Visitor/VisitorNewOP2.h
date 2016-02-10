/**
 * VisitorNewOP2.h
 * Concrete Visitor class
**/
#ifndef __VISITOR_NEW_OP2__
#define __VISITOR_NEW_OP2__

#include "IVisitor.h"
#include "MyInt.h"
#include "MyDouble.h"

class VisitorNewOP2 : public IVisitor
{
	public:
		virtual void visitMyInt(MyInt *myInt);
		virtual void visitMyDouble(MyDouble *MyDouble);
};

#endif	//__VISITOR_NEW_OP2__
