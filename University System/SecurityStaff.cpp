#include "SecurityStaff.h"



SecurityStaff::SecurityStaff():Staff()
{
}


SecurityStaff::~SecurityStaff()
{
}

SecurityStaff::SecurityStaff(string i, string fin, int slr, int ot) :Staff(i, fin, slr, ot)
{
}

SecurityStaff::SecurityStaff(SecurityStaff &ss)
{
	setid(ss.getid());
	setname(ss.getname());//copy constructor
	setsalary(ss.getsalary());
	setovertime(ss.getovertime());
}

void SecurityStaff::salary_()
{
	setovertime(37500 + 1000 * getovertime());
}
