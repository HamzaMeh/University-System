#include "Faculty.h"



Faculty::Faculty() :Employee(), sections(0)
{
}


Faculty::~Faculty()
{
}

Faculty::Faculty(string i, string name, int salary,int cs) :Employee(i, name, salary), sections(cs)
{
}

Faculty::Faculty(Faculty &f)
{
	setid(f.getid());
	setname(f.getname());//copy constructor
	setsalary(f.getsalary());
	setsections(f.getsections());
}

void Faculty::setsections(int cs)
{
	sections = cs;
}

int Faculty::getsections()
{
	return sections;
}
