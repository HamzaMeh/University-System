#include "LibraryStaff.h"



LibraryStaff::LibraryStaff() :Staff()
{
}


LibraryStaff::~LibraryStaff()
{
}

LibraryStaff::LibraryStaff(string i, string fin, int slry, int over) :Staff(i, fin, slry, over)
{
}

LibraryStaff::LibraryStaff(LibraryStaff &ls)
{
	setid(ls.getid());
	setname(ls.getname());//copy constructor
	setsalary(ls.getsalary());
	setovertime(ls.getovertime());
}

void LibraryStaff::salary_()
{
	setsalary(95000 + 1000 * getovertime());
}
