#include "Employee.hpp"
#include "hw03.hpp"
#include "Date.hpp"


Employee::Employee()
{
	name     = " ";
	id       = 0;
	phoneNum = 0;
	age      = 0;
	gender   = ' ';
	jobTitle = " ";
	salary   = 0;
	hireDate.SetDate(0,0,0);

}

Employee::Employee(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year) : name(name), id(id), phoneNum(phoneNum), age(age), gender(gender), jobTitle(jobTitle), salary(salary)
{
	hireDate.SetDate(month,day,year);
}

Employee::~Employee()
{

}

void Employee::SetName(string newName)
{
    name = newName;
}
void Employee::SetID(int newId)
{
    id = newId;
}
void Employee::SetPhoneNumber(int newPhoneNum)
{
    phoneNum = newPhoneNum;
}
void Employee::SetAge(int newAge)
{
    age = newAge;
}
void Employee::SetGender(char newGender)
{
    gender = newGender;
}
void Employee::SetJobTitle(string newTitle)
{
    jobTitle = newTitle;
}
void Employee::SetSalary(int newSalary)
{
    salary = newSalary;
}
void Employee::SetHireDate(int month, int day, int year)
{
    hireDate.SetDate(month,day, year);
}

void Employee::Print() const
{
	string salary1;
	salary1 = "$" + to_string(salary);

	cout << endl << endl;

	cout << " Name          ID      Phone       Age   Gender   Job Title   Salary   Hire Date\n";
	cout << "------------- ------  ----------- -----  -------  ---------- -------- ----------\n";
    cout << left << setw(14) << name << setw(8) << id << setw(13) << phoneNum
    << setw(9) << age << setw(7) << gender << setw(10) << jobTitle
	<< setw(8) << salary1 << setw(13) << hireDate.Print() << endl;


}
