#pragma once
#include "StudentAssistant.h"
class ResearchAssistant :
	public StudentAssistant
{
public:
	ResearchAssistant();
	~ResearchAssistant();
	ResearchAssistant(string, string, int);
	ResearchAssistant(ResearchAssistant&);
	void salary_();
};

