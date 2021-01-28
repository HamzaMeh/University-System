#include "StudentAssistant.h"



StudentAssistant::StudentAssistant() :Employee()
{
}


StudentAssistant::~StudentAssistant()
{
}

StudentAssistant::StudentAssistant(string i, string fin, int slry) :Employee(i, fin, slry)
{
}

StudentAssistant::StudentAssistant(StudentAssistant &sa)
{
	setid(sa.getid());
	setname(sa.getname());
	setsalary(sa.getsalary());
}
