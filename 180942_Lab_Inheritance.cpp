#include "180942_Faculty.h"
#include "180942_Person.h"
#include "180942_Student.h"
#include <iostream>
using namespace std;

void main()
{
	/////Exercise 5///////

	Student s("Ted","Thompson",22,3.91);
	Faculty f("Richard","Karp",45,2,420);

	/*Person(string,string,int) called
    Student(string,string,int,float) called
    Person(string,string,int) called
    Faculty(string,string,int,int,int) called
   ~Faculty() called
   ~Person() called
   ~Student() called
   ~Person() called*/

	s.printStudent();
	cout<<endl;
	f.printFaculty();
	cout<<endl;

	///Exercise7/////

	/*Person(string,string,int) called
    Student(string,string,int,float) called
    Person(string,string,int) called
    Faculty(string,string,int,int,int) called
    Ted Thompson is 22 years old, his cgpa is 3.91
    Richard Karp is 45 years old, Number of Courses are 2, Telephone Extension is 420
   ~Faculty() called
   ~Person() called
   ~Student() called
   ~Person() called
   Press any key to continue . . .*/


	system("pause");

}