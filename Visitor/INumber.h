/**
 * INumber.h
 * Element Interface
**/
#ifndef __INUMBER__
#define __INUMBER__

class IVisitor;

class INumber
{
	public:
		virtual ~INumber(){}
		virtual void acceptVisitor(IVisitor *visitor) = 0;
};

#endif	//__INUMBER__
