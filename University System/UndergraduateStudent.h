#pragma once
#include "Student.h"
class UndergraduateStudent :
	public Student
{
public:
	UndergraduateStudent();
	~UndergraduateStudent();
	UndergraduateStudent(string, string, int,int);
	UndergraduateStudent(UndergraduateStudent&);
	void fee_();
};

