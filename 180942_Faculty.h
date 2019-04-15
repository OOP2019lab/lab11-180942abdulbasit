#include <string>
#include "180942_Person.h"
using namespace std;

#pragma once

class Faculty: private Person
{
private:
	int course_count;
	int telephone;

public:
	Faculty::Faculty();
	Faculty::Faculty(string,string,int,int,int);
	Faculty::~Faculty();

	int Faculty::get_course_count()const;
	int Faculty::get_telephone()const;
	void Faculty::set_course_count(int);
	void Faculty::set_telephone(int);

	void Faculty::printFaculty()const;
};