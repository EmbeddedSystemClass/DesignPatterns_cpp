/**
 * Adapter2.h
 * Adapter class
**/
#ifndef __ADAPTER2__
#define __ADAPTER2__

#include "NewClass.h"
#include "OldClass2.h"

class Adapter2 : public NewClass
{
	private:
		OldClass2 m_oldClass;
	public:
		int getTimeMilliSecond();
};

#endif	//__ADAPTER2__
