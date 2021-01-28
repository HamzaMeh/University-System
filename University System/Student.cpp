#include "Student.h"



Student::Student() :id(""), name(""), fee(0),credhrs(0)
{
}


Student::~Student()
{
}

Student::Student(string i, string fin, int f,int ch) :id(i), name(fin), fee(f), credhrs(ch)
{
}

Student::Student(Student &s)
{
	setid(s.getid());	//copy constructor
	setname(s.getname());
	setfee(s.getfee());
	setcrhrs(s.getcrhrs());
}

void Student::setid(string i)
{
	id = i;
}

void Student::setname(string fin)
{
	name = fin;
}

void Student::setfee(int f)
{
	fee = f;
}

void Student::setcrhrs(int hrs)
{
	credhrs = hrs;
}

string Student::getid()
{
	return id;
}

string Student::getname()
{
	return name;
}

int Student::getfee()
{
	return fee;
}

int Student::getcrhrs()
{
	return credhrs;
}
