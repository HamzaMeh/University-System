#pragma once
#include "Employee.h"
class Staff :
	public Employee
{
private:
	int overtime;
public:
	Staff();
	~Staff();
	Staff(string, string, int,int);
	Staff(Staff&);
	void setovertime(int);
	int getovertime();
};

