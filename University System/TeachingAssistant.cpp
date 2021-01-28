#include "TeachingAssistant.h"



TeachingAssistant::TeachingAssistant() :StudentAssistant()
{
}


TeachingAssistant::~TeachingAssistant()
{
}

TeachingAssistant::TeachingAssistant(string id, string fin, int slry) :StudentAssistant(id, fin, slry)
{
}

TeachingAssistant::TeachingAssistant(TeachingAssistant &ta)
{
	setid(ta.getid());
	setname(ta.getname());//copy constructor
	setsalary(ta.getsalary());
}

void TeachingAssistant::salary_()
{
	setsalary(60000);
}
