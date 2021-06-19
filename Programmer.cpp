#include "Employee.hpp"
#include "hw03.hpp"
#include "Date.hpp"
#include "Programmer.hpp"

Programmer::Programmer()
{
	name     = " ";
	id       = 0;
	phoneNum = 0;
	age      = 0;
	gender   = ' ';
	jobTitle = " ";
	salary   = 0;
	hireDate.SetDate(0,0,0);
	departNum = 0;
	supervisor = " ";
	salaryIncrease = 0.0;
	cPlusPlus = false;
	java = false;

}

Programmer::Programmer(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year, int departNum, string supervisor, float salaryIncrease, bool cPlusPlus, bool java)
{
	this->name     = name;
	this->id       = id;
	this->phoneNum = phoneNum;
	this->age      = age;
	this->gender   = gender;
	this->jobTitle = jobTitle;
	this->salary   = salary;
	hireDate.SetDate(month,day,year);
	this->departNum = departNum;
	this->supervisor = supervisor;
	this->salaryIncrease = salaryIncrease;
	this->cPlusPlus = cPlusPlus;
	this->java = java;
}


Programmer::~Programmer()
{

}



void Programmer::SetDepartNum(int newDepartmentNum)
{
	departNum = newDepartmentNum;
}
void Programmer::SetSupervisor(string newSupervisor)
{
	supervisor = newSupervisor;
}
void Programmer::SetSalaryIncrease(float newSalaryIncrease)
{
	salaryIncrease = newSalaryIncrease;
}
void Programmer::SetCPlusPlus(bool newCPlusPlus)
{
	cPlusPlus = newCPlusPlus;
}
void Programmer::SetJava(bool newJava)
{
	java = newJava;
}


void Programmer::Print() const
{
	string cPlusPlus1;
	string java1;

	cPlusPlus1 = cPlusPlus? "Yes" : "No";
	java1 = java? "Yes" : "No";

	Employee::Print();

	cout << endl << endl << endl;
	cout << "Name           Depart #     Supervisor's Name       Raise %   C++?  Java?\n";
	cout << "-------------  ----------  -----------------       -------   ----  -----\n";
	cout << left << setw(15) << GetName() << setw(15) << departNum << setw(22) << supervisor << setw(10) << salaryIncrease << setw(6) << cPlusPlus1 << java1 << endl;

	cout << endl << endl;


}
