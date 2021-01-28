#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
	string id;
	string name;
	int salary;
public:
	Employee();
	~Employee();
	Employee(string, string, int);
	Employee(Employee&);
	void setid(string);
	void setname(string);
	void setsalary(int);
	string getid();
	string getname();
	int getsalary();
	virtual void salary_() = 0;
};

