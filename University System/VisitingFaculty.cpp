#include "VisitingFaculty.h"



VisitingFaculty::VisitingFaculty() :Faculty()
{
}


VisitingFaculty::~VisitingFaculty()
{//default destructor
}

VisitingFaculty::VisitingFaculty(string id, string name, int salary, int sec) :Faculty(id, name, salary, sec)
{
}
void VisitingFaculty::salary_()			//salary calculator
{
	setsalary(100000 * getsections());
}
VisitingFaculty::VisitingFaculty(VisitingFaculty &vf)
{
	setid(vf.getid());
	setname(vf.getname());//copy constructor
	setsalary(vf.getsalary());
	setsections(vf.getsections());
}


