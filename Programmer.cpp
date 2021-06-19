#include "Employee.h"
#include "Date.h"
#include "Programmer.h"



// Default Constructor
Programmer::Programmer()
: Employee(" ", 0, 0, 0, ' ', " ", 0, 0, 0, 0),
  departNum{0},supervisor{" "}, salaryIncrease{0}, cPlusPlus{false}, java{false}
{

}

// Alternate Constructor
Programmer::Programmer(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month,
                       int day, int year, int departNum, string supervisor, float salaryIncrease, bool cPlusPlus, bool java)
: Employee(name, id, phoneNum, age, gender, jobTitle, salary, month, day, year),
  departNum{departNum},supervisor{supervisor}, salaryIncrease{salaryIncrease}, cPlusPlus{cPlusPlus}, java{java}
{

}

// Destructor
Programmer::~Programmer()
= default;


// SETTER FUNCTIONS

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

// Print function to print out programmers details
void Programmer::Print() const
{
	string cPlusPlus1; // CALC & OUT- string depending on c++ knowledge
	string java1;      // CALC & OUT - string depending on java knowledge

	// set string to correct value
	cPlusPlus1 = cPlusPlus? "Yes" : "No";
	java1 = java? "Yes" : "No";

	// call base class print function
	Employee::Print();

	// print programmer class details
	cout << endl << endl << endl;
	cout << "Name           Depart #     Supervisor's Name       Raise %   C++?  Java?\n";
	cout << "-------------  ----------  -----------------       -------   ----  -----\n";
	cout << left << setw(15) << GetName() << setw(15) << departNum << setw(22) << supervisor << setw(10) << salaryIncrease << setw(6) << cPlusPlus1 << java1 << endl;

	cout << endl << endl;


}

bool compPhoneNum(const Employee& anEmp, const Programmer& aProg)
{
    bool same;
    same == anEmp.GetPhoneNumber() == aProg.GetPhoneNumber();
    return same;
}