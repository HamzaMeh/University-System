#pragma once
#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string id;
	string name;
	int fee;
	int credhrs;
public:
	Student();
	~Student();
	Student(string, string, int,int);
	Student(Student&);
	void setid(string);
	void setname(string);
	void setfee(int);
	void setcrhrs(int);
	string getid();
	string getname();
	int getfee();
	int getcrhrs();
	virtual void fee_() = 0;
};

