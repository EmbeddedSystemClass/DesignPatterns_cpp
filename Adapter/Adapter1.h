/**
 * Adapter1.h
 * Adapter class
**/
#ifndef __ADAPTER1__
#define __ADAPTER1__

#include "NewClass.h"
#include "OldClass1.h"

class Adapter1 : public NewClass
{
	private:
		OldClass1 m_oldClass;
	public:
		int getTimeMilliSecond();
};

#endif	//__ADAPTER1__
