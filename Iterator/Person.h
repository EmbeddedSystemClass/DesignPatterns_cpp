/**
 * Person.h
 * Any class to be contained in aggregate
**/
#ifndef __PERSON__
#define __PERSON__

#include <iostream>

class Person
{
	public:
		std::string m_name;
		int m_age;
	public:
		Person(std::string name, int age): m_name(name), m_age(age){}
};

#endif	//__PERSON__
