#include "180942_Faculty.h"
#include "180942_Person.h"
#include "180942_Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
	cout<<"Student() called"<<endl;
}

Student::Student(string fname, string lname, int a, float c): Person(fname,lname,a)
{
	cgpa=c;
	cout<<"Student(string,string,int,float) called"<<endl;

}

Student::~Student()
{
	cout<<"~Student() called"<<endl;
}

float Student::get_cgpa()const
{
	return cgpa;
}

void Student::get_cgpa(float c)
{
	cgpa=c;
}

void Student::printStudent()const
{
	Person::printInformation();
	cout<<", his cgpa is "<<cgpa;
	/*cout << first_name <<" " << last_name
     << "is  " << age <<" years old, his cgpa is " << cgpa;*/
}