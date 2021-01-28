#include "ResearchAssistant.h"



ResearchAssistant::ResearchAssistant():StudentAssistant()
{		//default constructor
}


ResearchAssistant::~ResearchAssistant()
{
}

ResearchAssistant::ResearchAssistant(string id, string fin, int slry) :StudentAssistant(id,fin,slry)
{
}

ResearchAssistant::ResearchAssistant(ResearchAssistant &ra)
{
	setid(ra.getid());
	setname(ra.getname());//copy constructor
	setsalary(ra.getsalary());
}

void ResearchAssistant::salary_()
{
	setsalary(50000);
}
