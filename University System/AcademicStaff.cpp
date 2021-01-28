#include "AcademicStaff.h"



AcademicStaff::AcademicStaff():Staff()
{
}


AcademicStaff::~AcademicStaff()
{
}

AcademicStaff::AcademicStaff(string i, string fin, int slry, int over) :Staff(i, fin, slry,over)
{
}

AcademicStaff::AcademicStaff(AcademicStaff &as)
{
	setid(as.getid());
	setname(as.getname());//copy constructor
	setsalary(as.getsalary());
	setovertime(as.getovertime());
}

void AcademicStaff::salary_()
{
	setsalary(100000+1000*getovertime());
}
