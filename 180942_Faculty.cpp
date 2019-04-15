#include "180942_Faculty.h"
#include "180942_Person.h"
#include "180942_Student.h"
#include <iostream>
using namespace std;

Faculty::Faculty()
{
	cout<<"Faculty() called"<<endl;
}

Faculty::Faculty(string fname,string lname,int a,int c,int n): Person(fname,lname,a)
{
	course_count=c;
	telephone=n;
	cout<<"Faculty(string,string,int,int,int) called"<<endl;
}

Faculty::~Faculty()
{
	cout<<"~Faculty() called"<<endl;
}

void Faculty::set_course_count(int c)
{
	course_count=c;
}

void Faculty::set_telephone(int t)
{
	telephone=t;
}

int Faculty::get_course_count()const
{
	return course_count;
}

int Faculty::get_telephone()const
{
	return telephone;
}

void Faculty::printFaculty()const
{
	printInformation();
	cout<<", Number of Courses are "<<course_count<<", Telephone Extension is "<<telephone;
}