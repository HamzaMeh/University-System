#pragma once
#include<string>
#include "AcademicStaff.h"
#include "Alumni.h"
#include "JanitorialStaff.h"
#include "LibraryStaff.h"
#include "MastersStudent.h"
#include "PermanentFaculty.h"
#include "PhDStudent.h"
#include "ResearchAssistant.h"
#include "SecurityStaff.h"
#include "StudentAssistant.h"
#include "TeachingAssistant.h"
#include "UndergraduateStudent.h"
#include "VisitingFaculty.h"
#include<fstream>
using namespace std;
class University
{
private:
	string name;
	int res;
	int teach;
	int acad;
	int libr;
	int janit;
	int secur;
	int perm;
	int visit;
	int under;
	int mast;
	int phd;
	StudentAssistant*ra;
	StudentAssistant*ta;
	Staff*aca;
	Staff*lib;
	Staff*jan;
	Staff*sec;
	Faculty*per;
	Faculty*vis;
	Student*und;
	Student*mas;
	Student*ph;
public:
	University();
	~University();
	University(string);
	University(University&);
	void setname(string);
	string getname();
	void addres();
	void addtea();
	void addacad();
	void addlib();
	void addjanit();
	void addsecur();
	void addperm();
	void addvisit();
	void addunder();
	void addmast();
	void addphd();
	void deleterea(string);
	void deletetea(string);
	void deleteacad(string);
	void deletelib(string);
	void deletejanit(string);
	void deletesecur(string);
	void deleteperm(string);
	void deletevisit(string);
	void deleteunder(string);
	void deletemast(string);
	void deletephd(string);
	void searchres(string);
	void searchtea(string);
	void searchacad(string);
	void searchlib(string);
	void searchjanit(string);
	void searchsecur(string);
	void searchperm(string);
	void searchvisit(string);
	void searchunder(string);
	void searchmast(string);
	void searchphd(string);
};

