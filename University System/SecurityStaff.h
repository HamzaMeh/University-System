#pragma once
#include "Staff.h"
class SecurityStaff :
	public Staff
{
public:
	SecurityStaff();
	~SecurityStaff();
	SecurityStaff(string, string, int,int);
	SecurityStaff(SecurityStaff&);
	void salary_();
};

