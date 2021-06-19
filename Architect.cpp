#include "Employee.hpp"
#include "hw03.hpp"
#include "Date.hpp"
#include "Architect.hpp"



Architect::Architect()
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
	yearsExperience = 0;
}

Architect::Architect(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year, int departNum, string supervisor, float salaryIncrease, int yearsExperience)
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
	this->yearsExperience = yearsExperience;
}


Architect::~Architect()
{

}


void Architect::SetDepartNum(int newDepartmentNum)
{
	departNum = newDepartmentNum;
}
void Architect::SetSupervisor(string newSupervisor)
{
	supervisor = newSupervisor;
}
void Architect::SetSalaryIncrease(float newSalaryIncrease)
{
	salaryIncrease = newSalaryIncrease;
}
void Architect::SetYearsExperience(int newYearsExperience)
{
	yearsExperience = newYearsExperience;
}


void Architect::Print() const
{
	Employee::Print();

	cout << endl << endl << endl;
	cout << "Name           Depart #     Supervisor's Name       Raise %   # of Years Exp\n";
	cout << "-------------  ----------  -----------------       -------    ---------------\n";
	cout << left << setw(15) << GetName() << setw(15) << departNum << setw(22) << supervisor << setw(13) << salaryIncrease << yearsExperience << endl;


	cout << endl << endl;
}
