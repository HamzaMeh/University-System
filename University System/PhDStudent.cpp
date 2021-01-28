#include "PhDStudent.h"



PhDStudent::PhDStudent() :Student()
{
}


PhDStudent::~PhDStudent()
{
}

PhDStudent::PhDStudent(string i, string fin, int f,int ch) :Student(i, fin, f,ch)
{
}

PhDStudent::PhDStudent(PhDStudent &ps)
{
}

void PhDStudent::fee_()
{
	setfee(15000 * getcrhrs() + 40000);
}
