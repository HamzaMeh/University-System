#include "MastersStudent.h"



MastersStudent::MastersStudent() :Student()
{
}


MastersStudent::~MastersStudent()
{
}

MastersStudent::MastersStudent(string i, string fin, int f,int hrs) :Student(i, fin, f,hrs)
{
}

MastersStudent::MastersStudent(MastersStudent &ms)
{
	setid(ms.getid());	//copy constructor
	setname(ms.getname());
	setfee(ms.getfee());
	setcrhrs(ms.getcrhrs());
}

void MastersStudent::fee_()
{
	setfee(12000 * getcrhrs() + 40000);
}
