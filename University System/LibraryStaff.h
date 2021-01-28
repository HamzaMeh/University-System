#pragma once
#include "Staff.h"
class LibraryStaff :
	public Staff
{
public:
	LibraryStaff();
	~LibraryStaff();
	LibraryStaff(string, string, int,int);
	LibraryStaff(LibraryStaff&);
	void salary_();
};

