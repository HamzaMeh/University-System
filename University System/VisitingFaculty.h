#pragma once
#include "Faculty.h"
class VisitingFaculty :
	public Faculty
{
public:
	VisitingFaculty();
	~VisitingFaculty();
	VisitingFaculty(string, string, int,int);
	VisitingFaculty(VisitingFaculty&);
	void salary_();
};

