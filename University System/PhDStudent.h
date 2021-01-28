#pragma once
#include "Student.h"
class PhDStudent :
	public Student
{
public:
	PhDStudent();
	~PhDStudent();
	PhDStudent(string, string, int,int);
	PhDStudent(PhDStudent&);
	void fee_();
};

