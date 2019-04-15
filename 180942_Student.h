#include <string>
#include "180942_Person.h"
using namespace std;

#pragma once

class Student: private Person 
{
private:
	string fyp_name;
	float cgpa;
	
public:
	Student::Student();
	Student::Student(string, string, int, float);
	Student::~Student();

	float Student::get_cgpa()const;
	void Student::get_cgpa(float);

	void Student::printStudent()const;
};