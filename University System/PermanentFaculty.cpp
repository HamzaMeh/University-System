#include "PermanentFaculty.h"



PermanentFaculty::PermanentFaculty():Faculty()
{		//default constructor
}


PermanentFaculty::~PermanentFaculty()
{
}

PermanentFaculty::PermanentFaculty(string id, string fin, int sal,int sec) :Faculty(id, fin, sal,sec)
{
}

PermanentFaculty::PermanentFaculty(PermanentFaculty &pf)
{
	setid(pf.getid());
	setname(pf.getname());//copy constructor
	setsalary(pf.getsalary());
	setsections(pf.getsections());
}

void PermanentFaculty::salary_()
{
	setsalary(110000);
}
