#include "Staff.h"



Staff::Staff() :Employee(),overtime(0)
{
}


Staff::~Staff()
{
}

Staff::Staff(string i, string fin, int slry,int over):Employee(i,fin,slry),overtime(over)
{
}

Staff::Staff(Staff &s)
{
	setid(s.getid());
	setname(s.getname());//copy constructor
	setsalary(s.getsalary());
	setovertime(s.getovertime());
}

void Staff::setovertime(int over)
{
	overtime = over;
}

int Staff::getovertime()
{
	return overtime;
}
