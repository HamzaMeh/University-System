#include "University.h"



University::University() :name("")
{
	ofstream fout;
	fout.open("namefile.txt", ios::app);			//opening file in append mode
	ifstream fin;
	fin.open("namefile.txt");
	getline(fin, name);
	if (name == "")		//if there is no name in file, take it from user and write to file
	{
		cout << "Please enter name of university";
		getline(cin, name);
		fout << name;
	}
	fout.close();
	fin.close();
	fout.open("resfile.txt", ios::app);				//creating file in append mode
	string temp;
	fin.open("resfile.txt");		//opening file to read data
	getline(fin, temp);
	if (temp == "True")		//If there is data already, read it other wise set no of research assistant to 0
		fin >> res;
	else
		res = 0;
	fout.close();
	fin.close();//closing file
	fout.open("teafile.txt", ios::app);
	fin.open("teafile.txt");
	getline(fin, temp);
	if (temp == "True")
		fin >> teach;
	else
		teach = 0;
	fout.close();
	fin.close();
	fout.open("acad.txt", ios::app);
	fin.open("acad.txt");
	getline(fin, temp);
	if (temp == "True")
		fin >> acad;
	else
		acad = 0;		//setting number of academic staff to zero in case no data written to file
	fout.close();
	fin.close();
	fout.open("libr.txt", ios::app);
	fin.open("libr.txt");
	getline(fin, temp);
	if (temp == "True")
		fin >> libr;
	else
		libr = 0;
	fout.close();
	fin.close();
	fout.open("janit.txt", ios::app);
	fin.open("janit.txt");
	getline(fin, temp);
	if (temp == "True")
		fin >> janit;		//reading number of janitorial staff from file
	else
		janit = 0;
	fout.close();
	fin.close();
	fout.open("security.txt", ios::app);
	fin.open("security.txt");
	getline(fin, temp);			//reading from file
	if (temp == "True")
		fin >> secur;
	else
		secur = 0;
	fout.close();
	fin.close();
	fout.open("permfaculty.txt", ios::app);
	fin.open("permfaculty.txt");
	getline(fin, temp);
	if (temp == "True")
		fin >> perm;
	else
		perm = 0;
	fout.close();		//closing the file in write mode
	fin.close();
	fout.open("visitfaculty.txt", ios::app);
	fin.open("visitfaculty.txt");
	getline(fin, temp);
	if (temp == "True")
		fin >> visit;
	else
		visit = 0;
	fout.close();
	fin.close();	//closing file in reading mode
	fout.open("understud.txt", ios::app);
	fin.open("understud.txt");
	getline(fin, temp);
	if (temp == "True")
		fin >> under;
	else
		under = 0;
	fout.close();
	fin.close();
	fout.open("maststud.txt", ios::app);
	fin.open("maststud.txt");
	getline(fin, temp);
	if (temp == "True")
		fin >> mast;
	else
		mast = 0;
	fout.close();	//closing the file
	fin.close();
	fout.open("phdstud.txt", ios::app);
	fin.open("phdstud.txt");
	getline(fin, temp);
	if (temp == "True")
		fin >> phd;
	else
		phd = 0;
	fout.close();
	fin.close();
	ra = new ResearchAssistant[res];
	ta = new TeachingAssistant[teach];
	aca = new AcademicStaff[acad];
	lib = new LibraryStaff[libr];
	jan = new JanitorialStaff[janit];
	sec = new SecurityStaff[secur];
	per = new PermanentFaculty[perm];
	vis = new VisitingFaculty[visit];
	und = new UndergraduateStudent[under];
	mas = new MastersStudent[mast];
	ph = new PhDStudent[phd];
	fout.open("research.txt", ios::app);
	fin.open("research.txt");
	int i=0,tmp;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		ra[i].setid(temp);		//storing id
		getline(fin, temp);
		ra[i].setname(temp);//storing name
		fin >> tmp;
		getline(fin, temp);
		ra[i].setsalary(tmp);
		i++;
	}
	fout.close();
	fin.close();
	fout.open("teaching.txt", ios::app);
	fin.open("teaching.txt");
	i = 0;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		ta[i].setid(temp);
		getline(fin, temp);
		ta[i].setname(temp);
		fin >> tmp;
		getline(fin, temp);
		ta[i].setsalary(tmp);
		i++;
	}
	fout.close();
	fin.close();
	fout.open("academic.txt", ios::app);
	fin.open("academic.txt");
	i = 0;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		aca[i].setid(temp);
		getline(fin, temp);
		aca[i].setname(temp);
		fin >> tmp;			//getting overtime hours from file
		getline(fin, temp);
		aca[i].setovertime(tmp);
		fin >> tmp;
		getline(fin, temp);
		aca[i].setsalary(tmp);
		i++;
	}
	fout.close();
	fin.close();
	fout.open("library.txt", ios::app);
	fin.open("library.txt");
	i = 0;
	while (!fin.eof())		//reading until end of file
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		lib[i].setid(temp);
		getline(fin, temp);
		lib[i].setname(temp);
		fin >> tmp;
		getline(fin, temp);
		lib[i].setovertime(tmp);
		fin >> tmp;
		getline(fin, temp);
		lib[i].setsalary(tmp);
		i++;
	}
	fout.close();
	fin.close();
	fout.open("janitorial.txt", ios::app);
	fin.open("janitorial.txt");
	i = 0;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		jan[i].setid(temp);
		getline(fin, temp);
		jan[i].setname(temp);
		fin >> tmp;
		getline(fin, temp);
		jan[i].setovertime(tmp);
		fin >> tmp;
		getline(fin, temp);
		jan[i].setsalary(tmp);
		i++;
	}
	fout.close();
	fin.close();;
	fout.open("security.txt", ios::app);
	fin.open("security.txt");//opening file in reading mode
	i = 0;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		sec[i].setid(temp);
		getline(fin, temp);
		sec[i].setname(temp);
		fin >> tmp;
		getline(fin, temp);
		sec[i].setovertime(tmp);
		fin >> tmp;
		getline(fin, temp);
		sec[i].setsalary(tmp);
		i++;
	}
	fout.close();
	fin.close();
	fout.open("permanentfaculty.txt", ios::app);
	fin.open("permanentfaculty.txt");
	i = 0;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		per[i].setid(temp);
		getline(fin, temp);
		per[i].setname(temp);
		fin >> tmp;
		getline(fin, temp);
		per[i].setsections(tmp);		//storing number of sections
		fin >> tmp;
		getline(fin, temp);
		per[i].setsalary(tmp);
		i++;
	}
	fout.close();
	fin.close();
	fout.open("visitingfaculty.txt", ios::app);
	fin.open("visitingfaculty.txt");
	i = 0;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		vis[i].setid(temp);
		getline(fin, temp);
		vis[i].setname(temp);
		fin >> tmp;
		getline(fin, temp);
		vis[i].setsections(tmp);
		fin >> tmp;
		getline(fin, temp);
		vis[i].setsalary(tmp);		//storing salary of visiting faculty
		i++;
	}
	fout.close();
	fin.close();
	fout.open("undergrad.txt", ios::app);
	fin.open("undergrad.txt");
	i = 0;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		und[i].setid(temp);
		getline(fin, temp);
		und[i].setname(temp);
		fin >> tmp;
		getline(fin, temp);
		und[i].setcrhrs(tmp);
		fin >> tmp;
		getline(fin, temp);
		und[i].setfee(tmp);
		i++;
	}
	fout.close();
	fin.close();
	fout.open("master.txt", ios::app);
	fin.open("master.txt");
	i = 0;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		mas[i].setid(temp);
		getline(fin, temp);
		mas[i].setname(temp);
		fin >> tmp;
		getline(fin, temp);
		mas[i].setcrhrs(tmp);
		fin >> tmp;
		getline(fin, temp);
		mas[i].setfee(tmp);
		i++;
	}
	fout.close();
	fin.close();
	fout.open("phd.txt", ios::app);
	fin.open("phd.txt");
	i = 0;
	while (!fin.eof())
	{
		getline(fin, temp);
		if (temp == "")
		{
			break;
		}
		ph[i].setid(temp);
		getline(fin, temp);
		ph[i].setname(temp);		//storing data of phd student here
		fin >> tmp;
		getline(fin, temp);
		ph[i].setcrhrs(tmp);
		fin >> tmp;
		getline(fin, temp);
		ph[i].setfee(tmp);
		i++;
	}
	fout.close();
	fin.close();
}


University::~University()
{
	ofstream fout;
	fout.open("resfile.txt");
	fout << "True" << endl;
	fout << res;
	fout.close();
	fout.open("teafile.txt");
	fout << "True" << endl;
	fout << teach;
	fout.close();
	fout.open("acad.txt");
	fout << "True" << endl;
	fout << acad;
	fout.close();
	fout.open("libr.txt");
	fout << "True" << endl;
	fout << libr;
	fout.close();
	fout.open("janit.txt");
	fout << "True" << endl;
	fout << janit;
	fout.close();
	fout.open("security.txt");
	fout << "True" << endl;
	fout << secur;
	fout.close();
	fout.open("permfaculty.txt");
	fout << "True" << endl;
	fout << perm;
	fout.close();
	fout.open("visitfaculty.txt");
	fout << "True" << endl;
	fout << visit;
	fout.close();
	fout.open("understud.txt");
	fout << "True" << endl;
	fout << under;
	fout.close();
	fout.open("maststud.txt");
	fout << "True" << endl;
	fout << mast;
	fout.close();
	fout.open("phdstud.txt");
	fout << "True" << endl;
	fout << phd;
	fout.close();
	fout.open("research.txt");
	for (int i = 0; i < res; i++)
	{									//writing data to research assistant file
		fout << ra[i].getid() << endl;
		fout << ra[i].getname() << endl;
		fout << ra[i].getsalary() << endl;
	}
	fout.close();
	fout.open("teaching.txt");
	for (int i = 0; i < teach; i++)
	{
		fout << ta[i].getid() << endl;
		fout << ta[i].getname() << endl;
		fout << ta[i].getsalary() << endl;
	}
	fout.close();
	fout.open("academic.txt");
	for (int i = 0; i < acad; i++)
	{
		fout << aca[i].getid() << endl;
		fout << aca[i].getname() << endl;
		fout << aca[i].getovertime() << endl;		//getting overtimme hours of academic staff
		fout << aca[i].getsalary() << endl;
	}
	fout.close();
	fout.open("library.txt");
	for (int i = 0; i < libr; i++)
	{
		fout << lib[i].getid() << endl;
		fout << lib[i].getname() << endl;
		fout << lib[i].getovertime() << endl;
		fout << lib[i].getsalary() << endl;
	}
	fout.close();
	fout.open("janitorial.txt");
	for (int i = 0; i < janit; i++)
	{
		fout << jan[i].getid() << endl;
		fout << jan[i].getname() << endl;
		fout << jan[i].getovertime() << endl;
		fout << jan[i].getsalary() << endl;
	}
	fout.close();
	fout.open("security.txt");
	for (int i = 0; i < secur; i++)
	{
		fout << sec[i].getid() << endl;
		fout << sec[i].getname() << endl;
		fout << sec[i].getovertime() << endl;
		fout << sec[i].getsalary() << endl;
	}
	fout.close();
	fout.open("permanentfaculty.txt");
	for (int i = 0; i < perm; i++)
	{
		fout << per[i].getid() << endl;
		fout << per[i].getname() << endl;
		fout << per[i].getsections() << endl;		//getting sections a permanent faculty teaches at university
		fout << per[i].getsalary() << endl;
	}
	fout.close();
	fout.open("visitingfaculty.txt");
	for (int i = 0; i < visit; i++)
	{
		fout << vis[i].getid() << endl;
		fout << vis[i].getname() << endl;
		fout << vis[i].getsections() << endl;
		fout << vis[i].getsalary() << endl;
	}
	fout.close();
	fout.open("undergrad.txt");
	for (int i = 0; i < under; i++)
	{
		fout << und[i].getid() << endl;
		fout << und[i].getname() << endl;
		fout << und[i].getcrhrs() << endl;		//credit hours of a undergrad student
		fout << und[i].getfee() << endl;
	}
	fout.close();
	fout.open("master.txt");
	for (int i = 0; i < mast; i++)
	{
		fout << mas[i].getid() << endl;
		fout << mas[i].getname() << endl;
		fout << mas[i].getcrhrs() << endl;
		fout << mas[i].getfee() << endl;
	}
	fout.close();
	fout.open("phd.txt");
	for (int i = 0; i < phd; i++)
	{
		fout << ph[i].getid() << endl;
		fout << ph[i].getname() << endl;
		fout << ph[i].getcrhrs() << endl;
		fout << ph[i].getfee() << endl;
	}
	fout.close();
}

University::University(string temp) :name(temp)
{		//parameteric constructor
	res = 1;
	teach = 1;
	acad = 1;
	libr = 1;
	janit = 1;
	secur = 1;
	perm = 1;
	visit = 1;
	under = 1;
	mast = 1;
	phd = 1;
	ra = new ResearchAssistant[res];
	ta = new TeachingAssistant[teach];
	aca = new AcademicStaff[acad];
	lib = new LibraryStaff[libr];
	jan = new JanitorialStaff[janit];
	sec = new SecurityStaff[secur];
	per = new PermanentFaculty[perm];
	vis = new VisitingFaculty[visit];
	und = new UndergraduateStudent[under];
	mas = new MastersStudent[mast];
	ph = new PhDStudent[phd];
}

University::University(University &u)
{
	name = u.name;		//copy constructor
}

void University::setname(string temp)		//setter
{	
	name = temp;
}

string University::getname()		//getter
{
	return name;
}

void University::addres()
{
	StudentAssistant*temp = new ResearchAssistant[res];
	for (int i = 0; i < res; i++)
	{		//storing in a temporary array		
		temp[i] = ra[i];
	}
	delete[]ra;	
	res++;		//increasing size of array	
	ra = new ResearchAssistant[res];
	for (int i = 0; i < res - 1; i++)
	{
		ra[i] = temp[i];		//storing back in original array	
	}	
	delete[]temp;		//deleting temp array
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < res; i++)
		{
			if (tmp == ra[i].getid())		//checking if any other same id exists
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "This ID is already assigned. Enter another one ";
		}
		else
		{
			break;
		}
	}
	ra[res - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	ra[res - 1].setname(tmp);
	ra[res - 1].salary_();		// salary calculator
}

void University::searchres(string id)
{
	bool flag = false;
	for (int i = 0; i < res; i++)
	{
		if (id == ra[i].getid())		// matching id with stored data
		{
			flag = true;
			cout << "Name: " << ra[i].getname() << endl;
			cout << "Salary: Rs " << ra[i].getsalary() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deleterea(string id)
{
	bool flag = false;
	for (int i = 0; i < res; i++)
	{
		if (id == ra[i].getid())			//matching id with stored in original
		{

			for (int j = i; j < res - 1; j++)
			{
				ra[j] = ra[j + 1];		//shifting leftwards array
			}
			flag = true;		//id matched. breaking from loop
			break;
		}
	}
	if (flag == true)
	{
		res--;
		StudentAssistant*temp = new ResearchAssistant[res];
		for (int i = 0; i < res; i++)
		{
			temp[i] = ra[i];				//storing in temporary array to remove endl character from last
		}
		delete[]ra;
		ra = new ResearchAssistant[res];
		for (int i = 0; i < res; i++)
		{
			ra[i] = temp[i];		//storing back in original array
		}
		delete[]temp;
		cout << "Record deleted Successfully!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addtea()
{
	StudentAssistant*temp = new TeachingAssistant[teach];
	for (int i = 0; i < teach; i++)
	{
		temp[i] = ta[i];
	}
	delete[]ta;
	teach++;
	ta = new TeachingAssistant[teach];
	for (int i = 0; i < teach - 1; i++)
	{
		ta[i] = temp[i];
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < teach; i++)
		{
			if (tmp == ta[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "Please enter other id. It already exists: ";
		}
		else
		{
			break;
		}
	}
	ta[teach - 1].setid(tmp);
	cout << "Enter  Your name here: ";
	getline(cin,tmp);
	ta[teach - 1].setname(tmp);
	ta[teach - 1].salary_();
}

void University::searchtea(string id)
{
	bool flag = false;
	for (int i = 0; i < teach; i++)
	{
		if (id == ta[i].getid())
		{
			flag = true;
			cout << "Name: " << ta[i].getname() << endl;
			cout << "Salary: Rs " << ta[i].getsalary() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deletetea(string id)
{
	bool flag = false;
	for (int i = 0; i < teach; i++)
	{
		if (id == ta[i].getid())
		{
			int j = i;
			for (; j < teach - 1; j++)
			{
				ta[j] = ta[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		teach--;
		StudentAssistant*temp = new TeachingAssistant[teach];
		for (int i = 0; i < teach; i++)
		{
			temp[i] = ta[i];
		}
		delete[]ta;
		ta = new TeachingAssistant[teach];
		for (int i = 0; i < teach; i++)
		{
			ta[i] = temp[i];
		}
		delete[]temp;
		cout << "Record deleted Successfully!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addacad()
{
	Staff*temp = new AcademicStaff[acad];
	for (int i = 0; i < acad; i++)
	{
		temp[i] = aca[i];		//storing in temp
	}
	delete[]aca;
	acad++;	//increasing size
	aca = new AcademicStaff[acad];
	for (int i = 0; i < acad - 1; i++)
	{
		aca[i] = temp[i];		//storing in original
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < acad; i++)
		{
			if (tmp == aca[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "Enter a new ID as it already exists: ";
		}
		else
		{
			break;
		}
	}
	aca[acad - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	aca[acad - 1].setname(tmp);
	cout << "Enter overtime in hours: ";
	int tp;
	cin >> tp;
	aca[acad - 1].setovertime(tp);
	aca[acad - 1].salary_();
}

void University::searchacad(string id)
{
	bool flag = false;
	for (int i = 0; i < acad; i++)
	{
		if (id == aca[i].getid())
		{
			flag = true;
			cout << "Name: " << aca[i].getname() << endl;
			cout << "Overtime hours: " << aca[i].getovertime() << endl;
			cout << "Salary: Rs " << aca[i].getsalary() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deleteacad(string id)
{
	bool flag = false;
	for (int i = 0; i < acad; i++)
	{
		if (id == aca[i].getid())
		{
			int j = i;
			for (; j < acad - 1; j++)
			{
				aca[j] = aca[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		acad--;
		Staff*temp = new AcademicStaff[acad];
		for (int i = 0; i < acad; i++)
		{
			temp[i] = aca[i];
		}
		delete[]aca;
		aca = new AcademicStaff[acad];
		for (int i = 0; i < acad; i++)
		{
			aca[i] = temp[i];
		}
		delete[]temp;
		cout << "Record deleted Successfully!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addlib()
{
	Staff*temp = new LibraryStaff[libr];
	for (int i = 0; i < libr; i++)
	{
		temp[i] = lib[i];
	}
	delete[]lib;
	libr++;
	lib = new LibraryStaff[libr];
	for (int i = 0; i < libr - 1; i++)
	{
		lib[i] = temp[i];
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < libr; i++)
		{
			if (tmp == lib[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "Enter a new ID as it already exists ";
		}
		else
		{
			break;
		}
	}
	lib[libr - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	lib[libr - 1].setname(tmp);
	cout << "Enter overtime in hours: ";
	int tp;
	cin >> tp;
	lib[libr - 1].setovertime(tp);
	lib[libr - 1].salary_();
}

void University::searchlib(string id)
{
	bool flag = false;
	for (int i = 0; i < libr; i++)
	{
		if (id == lib[i].getid())
		{
			flag = true;
			cout << "Name: " << lib[i].getname() << endl;
			cout << "Overtime hours: " << lib[i].getovertime() << endl;
			cout << "Salary: Rs " << lib[i].getsalary() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deletelib(string id)
{
	bool flag = false;
	for (int i = 0; i < libr; i++)
	{
		if (id == lib[i].getid())
		{
			int j = i;
			for (; j < libr - 1; j++)
			{
				lib[j] = lib[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		libr--;
		Staff*temp = new LibraryStaff[libr];
		for (int i = 0; i < libr; i++)
		{
			temp[i] = lib[i];
		}
		delete[]lib;
		lib = new LibraryStaff[libr];
		for (int i = 0; i < libr; i++)
		{
			lib[i] = temp[i];
		}
		delete[]temp;
		cout << "Record deleted!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addjanit()
{
	Staff*temp = new JanitorialStaff[janit];
	for (int i = 0; i < janit; i++)
	{
		temp[i] = jan[i];
	}
	delete[]jan;
	janit++;
	jan = new JanitorialStaff[janit];
	for (int i = 0; i < janit - 1; i++)
	{
		jan[i] = temp[i];
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < janit; i++)
		{
			if (tmp == jan[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "Enter a new ID as it already exists ";
		}
		else
		{
			break;
		}
	}
	jan[janit - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	jan[janit - 1].setname(tmp);
	cout << "Enter overtime in hours: ";
	int tp;
	cin >> tp;
	jan[janit - 1].setovertime(tp);
	jan[janit - 1].salary_();
}

void University::searchjanit(string id)
{
	bool flag = false;
	for (int i = 0; i < janit; i++)
	{
		if (id == jan[i].getid())
		{
			flag = true;
			cout << "Name: " << jan[i].getname() << endl;
			cout << "Overtime hours: " << jan[i].getovertime() << endl;
			cout << "Salary: Rs " << jan[i].getsalary() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deletejanit(string id)
{
	bool flag = false;
	for (int i = 0; i < janit; i++)
	{
		if (id == jan[i].getid())
		{
			int j = i;
			for (; j < janit - 1; j++)
			{
				jan[j] = jan[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		janit--;
		Staff*temp = new JanitorialStaff[janit];
		for (int i = 0; i < janit; i++)
		{
			temp[i] = jan[i];
		}
		delete[]jan;
		jan = new JanitorialStaff[janit];
		for (int i = 0; i < janit; i++)
		{
			jan[i] = temp[i];
		}
		delete[]temp;
		cout << "Record deleted!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addsecur()
{
	Staff*temp = new SecurityStaff[secur];
	for (int i = 0; i < secur; i++)
	{
		temp[i] = sec[i];
	}
	delete[]sec;
	secur++;
	sec = new SecurityStaff[secur];
	for (int i = 0; i < secur - 1; i++)
	{
		sec[i] = temp[i];
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < secur; i++)
		{
			if (tmp == sec[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "ID already exists! Enter a different id: ";
		}
		else
		{
			break;
		}
	}
	sec[secur - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	sec[secur - 1].setname(tmp);
	cout << "Enter overtime in hours: ";
	int tp;
	cin >> tp;
	sec[secur - 1].setovertime(tp);
	sec[secur - 1].salary_();
}

void University::searchsecur(string id)
{
	bool flag = false;
	for (int i = 0; i < secur; i++)
	{
		if (id == sec[i].getid())
		{
			flag = true;
			cout << "Name: " << sec[i].getname() << endl;
			cout << "Overtime hours: " << sec[i].getovertime() << endl;
			cout << "Salary: Rs " << sec[i].getsalary() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deletesecur(string id)
{
	bool flag = false;
	for (int i = 0; i < secur; i++)
	{
		if (id == sec[i].getid())
		{
			int j = i;
			for (; j < secur - 1; j++)
			{
				sec[j] = sec[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		secur--;
		Staff*temp = new SecurityStaff[secur];
		for (int i = 0; i < secur; i++)
		{
			temp[i] = sec[i];
		}
		delete[]sec;
		sec = new SecurityStaff[secur];
		for (int i = 0; i < secur; i++)
		{
			sec[i] = temp[i];
		}
		delete[]temp;
		cout << "Record deleted!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addperm()
{
	Faculty*temp = new PermanentFaculty[perm];
	for (int i = 0; i < perm; i++)
	{
		temp[i] = per[i];
	}
	delete[]per;
	perm++;
	per = new PermanentFaculty[perm];
	for (int i = 0; i < perm - 1; i++)
	{
		per[i] = temp[i];
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < perm; i++)
		{
			if (tmp == per[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "ID already exists! Enter a different id: ";
		}
		else
		{
			break;
		}
	}
	per[perm - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	per[perm - 1].setname(tmp);
	cout << "Enter the number of course sections: ";
	int tp;
	cin >> tp;
	per[perm - 1].setsections(tp);
	per[perm - 1].salary_();
}

void University::searchperm(string id)
{
	bool flag = false;
	for (int i = 0; i < perm; i++)
	{
		if (id == per[i].getid())
		{
			flag = true;
			cout << "Name: " << per[i].getname() << endl;
			cout << "Number of course sections: " << per[i].getsections() << endl;
			cout << "Salary: Rs " << per[i].getsalary() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deleteperm(string id)
{
	bool flag = false;
	for (int i = 0; i < perm; i++)
	{
		if (id == per[i].getid())
		{
			int j = i;
			for (; j < perm - 1; j++)
			{
				per[j] = per[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		perm--;
		Faculty*temp = new PermanentFaculty[perm];
		for (int i = 0; i < perm; i++)
		{
			temp[i] = per[i];
		}
		delete[]per;
		per = new PermanentFaculty[perm];
		for (int i = 0; i < perm; i++)
		{
			per[i] = temp[i];
		}
		delete[]temp;
		cout << "Record deleted!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addvisit()
{
	Faculty*temp = new VisitingFaculty[visit];
	for (int i = 0; i < visit; i++)
	{
		temp[i] = vis[i];
	}
	delete[]vis;
	visit++;
	vis = new VisitingFaculty[visit];
	for (int i = 0; i < visit - 1; i++)
	{
		vis[i] = temp[i];
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < visit; i++)
		{
			if (tmp == vis[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "ID already exists! Enter a different id: ";
		}
		else
		{
			break;
		}
	}
	vis[visit - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	vis[visit - 1].setname(tmp);
	cout << "Enter the number of course sections: ";
	int tp;
	cin >> tp;
	vis[visit - 1].setsections(tp);
	vis[visit - 1].salary_();
}

void University::searchvisit(string id)
{
	bool flag = false;
	for (int i = 0; i < visit; i++)
	{
		if (id == vis[i].getid())
		{
			flag = true;
			cout << "Name: " << vis[i].getname() << endl;
			cout << "Number of course sections: " << vis[i].getsections() << endl;
			cout << "Salary: Rs " << vis[i].getsalary() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deletevisit(string id)
{
	bool flag = false;
	for (int i = 0; i < visit; i++)
	{
		if (id == vis[i].getid())
		{
			int j = i;
			for (; j < visit - 1; j++)
			{
				vis[j] = vis[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		visit--;
		Faculty*temp = new VisitingFaculty[visit];
		for (int i = 0; i < visit; i++)
		{
			temp[i] = vis[i];
		}
		delete[]vis;
		vis = new VisitingFaculty[visit];
		for (int i = 0; i < visit; i++)
		{
			vis[i] = temp[i];
		}
		delete[]temp;
		cout << "Record deleted!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addunder()
{
	Student*temp = new UndergraduateStudent[under];
	for (int i = 0; i < under; i++)
	{
		temp[i] = und[i];
	}
	delete[]und;
	under++;
	und = new UndergraduateStudent[under];
	for (int i = 0; i < under - 1; i++)
	{
		und[i] = temp[i];
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < under; i++)
		{
			if (tmp == und[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "ID already exists! Enter a different id: ";
		}
		else
		{
			break;
		}
	}
	und[under - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	und[under - 1].setname(tmp);
	cout << "Enter the number of credit hours: ";
	int tp;
	cin >> tp;
	und[under - 1].setcrhrs(tp);
	und[under - 1].fee_();
}

void University::searchunder(string id)
{
	bool flag = false;
	for (int i = 0; i < under; i++)
	{
		if (id == und[i].getid())
		{
			flag = true;
			cout << "Name: " << und[i].getname() << endl;
			cout << "Credit hours: " << und[i].getcrhrs() << endl;
			cout << "Fee: Rs " << und[i].getfee() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deleteunder(string id)
{
	bool flag = false;
	for (int i = 0; i < under; i++)
	{
		if (id == und[i].getid())
		{
			int j = i;
			for (; j < under - 1; j++)
			{
				und[j] = und[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		under--;
		Student*temp = new UndergraduateStudent[under];
		for (int i = 0; i < under; i++)
		{
			temp[i] = und[i];
		}
		delete[]und;
		und = new UndergraduateStudent[under];
		for (int i = 0; i < under; i++)
		{
			und[i] = temp[i];
		}
		delete[]temp;
		cout << "Record deleted!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addmast()
{
	Student*temp = new MastersStudent[mast];
	for (int i = 0; i < mast; i++)
	{
		temp[i] = mas[i];
	}
	delete[]mas;
	mast++;
	mas = new MastersStudent[mast];
	for (int i = 0; i < mast - 1; i++)
	{
		mas[i] = temp[i];
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < mast; i++)
		{
			if (tmp == mas[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "ID already exists! Enter a different id: ";
		}
		else
		{
			break;
		}
	}
	mas[mast - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	mas[mast - 1].setname(tmp);
	cout << "Enter the number of credit hours: ";
	int tp;
	cin >> tp;
	mas[mast - 1].setcrhrs(tp);
	mas[mast - 1].fee_();
}

void University::searchmast(string id)
{
	bool flag = false;
	for (int i = 0; i < mast; i++)
	{
		if (id == mas[i].getid())
		{
			flag = true;
			cout << "Name: " << mas[i].getname() << endl;
			cout << "Credit hours: " << mas[i].getcrhrs() << endl;
			cout << "Fee: Rs " << mas[i].getfee() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deletemast(string id)
{
	bool flag = false;
	for (int i = 0; i < mast; i++)
	{
		if (id == mas[i].getid())
		{
			int j = i;
			for (; j < mast - 1; j++)
			{
				mas[j] = mas[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		mast--;
		Student*temp = new MastersStudent[mast];
		for (int i = 0; i < mast; i++)
		{
			temp[i] = mas[i];
		}
		delete[]mas;
		mas = new MastersStudent[mast];
		for (int i = 0; i < mast; i++)
		{
			mas[i] = temp[i];
		}
		delete[]temp;
		cout << "Record deleted!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}

void University::addphd()
{
	Student*temp = new PhDStudent[phd];
	for (int i = 0; i < phd; i++)
	{
		temp[i] = ph[i];
	}
	delete[]ph;
	phd++;
	ph = new PhDStudent[phd];
	for (int i = 0; i < phd - 1; i++)
	{
		ph[i] = temp[i];
	}
	delete[]temp;
	cout << "Enter ID: ";
	string tmp;
	cin.ignore();
	while (true)
	{
		getline(cin, tmp);
		bool flag = false;
		for (int i = 0; i < phd; i++)
		{
			if (tmp == ph[i].getid())
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			cout << "ID already exists! Enter a different id: ";
		}
		else
		{
			break;
		}
	}
	ph[phd - 1].setid(tmp);
	cout << "Enter name: ";
	getline(cin,tmp);
	ph[phd - 1].setname(tmp);
	cout << "Enter the number of credit hours: ";
	int tp;
	cin >> tp;
	ph[phd - 1].setcrhrs(tp);
	ph[phd - 1].fee_();
}

void University::searchphd(string id)
{
	bool flag = false;
	for (int i = 0; i < phd; i++)
	{
		if (id == ph[i].getid())
		{
			flag = true;
			cout << "Name: " << ph[i].getname() << endl;
			cout << "Credit hours: " << ph[i].getcrhrs() << endl;
			cout << "Fee: Rs " << ph[i].getfee() << endl;
		}
	}
	if (flag == false)
	{
		cout << "ID not found!" << endl;
	}
}

void University::deletephd(string id)
{
	bool flag = false;
	for (int i = 0; i < phd; i++)
	{
		if (id == ph[i].getid())
		{
			int j = i;
			for (; j < phd - 1; j++)
			{
				ph[j] = ph[j + 1];
			}
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
	phd--;
	Student*temp = new PhDStudent[phd];
	for (int i = 0; i < phd; i++)
	{
		temp[i] = ph[i];
	}
	delete[]ph;
	ph = new PhDStudent[phd];
	for (int i = 0; i < phd; i++)
	{
		ph[i] = temp[i];
	}
	delete[]temp;
	cout << "Record deleted!" << endl;
	}
	else
	{
		cout << "ID not found!" << endl;
	}
}


