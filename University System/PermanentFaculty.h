#pragma once
#include "Faculty.h"
class PermanentFaculty :
	public Faculty
{
public:
	PermanentFaculty();
	~PermanentFaculty();
	PermanentFaculty(string, string, int,int);
	PermanentFaculty(PermanentFaculty&);
	void salary_();
};

