#include "180942_Faculty.h"
#include "180942_Person.h"
#include "180942_Student.h"
#include <iostream>
using namespace std;

Person::Person()
{
	cout<<"Person() called"<<endl;
}

Person::Person(string fname,string lname,int a)
{
	first_name=fname;
	last_name=lname;
	age=a;
	cout<<"Person(string,string,int) called"<<endl;
}

Person::~Person()
{
	cout<<"~Person() called"<<endl;
}

string Person::get_first_name()const
{
	return first_name;
}

string Person::get_last_name()const
{
	return last_name;
}

int Person::get_age()const
{
	return age;
}

void Person::set_first_name(string fname)
{
	first_name=fname;
}

void Person::set_last_name(string lname)
{
	last_name=lname;
}

void Person::set_age(int a)
{
	age=a;
}

void Person::printInformation()const
{
	cout<<first_name<<" "<<last_name<<" is "<<age<<" years old";
}