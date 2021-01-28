#pragma once
#include "Employee.h"
class Faculty :
	public Employee
{
private:
	int sections;
public:
	Faculty();
	~Faculty();
	Faculty(string, string, int,int);
	Faculty(Faculty&);
	void setsections(int);
	int getsections();
};

