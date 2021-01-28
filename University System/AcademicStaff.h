#pragma once
#include "Staff.h"
class AcademicStaff :
	public Staff
{
public:
	AcademicStaff();
	~AcademicStaff();
	AcademicStaff(string, string, int,int);
	AcademicStaff(AcademicStaff&);
	void salary_();
};

