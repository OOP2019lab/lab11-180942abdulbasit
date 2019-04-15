#include <string>
using namespace std;

#pragma once

class Person
{
private:
	string first_name;
	string last_name;

protected:
	int age;

public:
	Person::Person();
	Person::Person(string,string,int);
	Person::~Person();

	string Person::get_first_name()const;
	string Person::get_last_name()const;
	int Person::get_age()const;
	void Person::set_first_name(string);
	void Person::set_last_name(string);
	void Person::set_age(int);

	void Person::printInformation()const;
};