#pragma once
#include "Student.h"
class MastersStudent :
	public Student
{
public:
	MastersStudent();
	~MastersStudent();
	MastersStudent(string, string, int,int);
	MastersStudent(MastersStudent&);
	void fee_();
};

