#include "JanitorialStaff.h"



JanitorialStaff::JanitorialStaff() :Staff()
{
}


JanitorialStaff::~JanitorialStaff()
{
}

JanitorialStaff::JanitorialStaff(string i, string fin, int slry, int over) :Staff(i, fin, slry, over)
{
}

JanitorialStaff::JanitorialStaff(JanitorialStaff &js)
{
	setid(js.getid());
	setname(js.getname());//copy constructor
	setsalary(js.getsalary());
	setovertime(js.getovertime());
}

void JanitorialStaff::salary_()
{
	setsalary(25000 + 1000 * getovertime());
}
