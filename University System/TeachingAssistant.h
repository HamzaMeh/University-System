#pragma once
#include "StudentAssistant.h"
class TeachingAssistant :
	public StudentAssistant
{
public:
	TeachingAssistant();
	~TeachingAssistant();
	TeachingAssistant(string, string, int);
	TeachingAssistant(TeachingAssistant&);
	void salary_();
};

