#include "UndergraduateStudent.h"



UndergraduateStudent::UndergraduateStudent():Student()
{
}


UndergraduateStudent::~UndergraduateStudent()
{
}

UndergraduateStudent::UndergraduateStudent(string i, string fin, int f,int hrs) :Student(i,fin,f,hrs)
{
}

UndergraduateStudent::UndergraduateStudent(UndergraduateStudent &us)
{
	setid(us.getid());	//copy constructor
	setname(us.getname());
	setfee(us.getfee());
	setcrhrs(us.getcrhrs());
}

void UndergraduateStudent::fee_()
{
	setfee(5000*getcrhrs()+40000);
}
