#pragma once
#include "Staff.h"
class JanitorialStaff :
	public Staff
{
public:
	JanitorialStaff();
	~JanitorialStaff();
	JanitorialStaff(string, string, int,int);
	JanitorialStaff(JanitorialStaff&);
	void salary_();
};

