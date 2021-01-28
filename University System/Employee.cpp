#include "Employee.h"



Employee::Employee():id(""),name(""),salary(0)
{
}


Employee::~Employee()
{
}

Employee::Employee(string i, string fin, int slry) :id(i), name(fin), salary(slry)//parameteric constructor
{
}

Employee::Employee(Employee &e)
{
	id = e.id;
	name = e.name;
	salary = e.salary;
}

void Employee::setid(string i)		//setter
{
	id = i;
}

void Employee::setname(string fin)
{
	name = fin;
}

void Employee::setsalary(int slry)
{
	salary = slry;
}

string Employee::getid()
{
	return id;
}

string Employee::getname()
{
	return name;
}
		//getter
int Employee::getsalary()
{
	return salary;
}
