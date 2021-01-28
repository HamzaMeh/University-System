#pragma once
#include "Employee.h"
class StudentAssistant :
	public Employee
{
public:
	StudentAssistant();
	~StudentAssistant();
	StudentAssistant(string, string, int);
	StudentAssistant(StudentAssistant&);
};

