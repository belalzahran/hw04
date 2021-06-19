#include "Employee.h"
#include "Date.h"
#include "Architect.h"


// Default Constructor
Architect::Architect()
: Employee(" ", 0, 0, 0, ' ', " ", 0, 0, 0, 0),
departNum{0}, supervisor{" "}, salaryIncrease{0.0}, yearsExperience{0}
{

}
// Alternate Constructor
Architect::Architect(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year, int departNum, string supervisor, float salaryIncrease, int yearsExperience)
: Employee(name, id, phoneNum, age, gender, jobTitle, salary, month, day, year),
departNum{departNum},supervisor{supervisor}, salaryIncrease{salaryIncrease}, yearsExperience{yearsExperience}
{

}

// Destructor
Architect::~Architect()
= default;

// SETTER FUNCTIONS
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

// Print function to print out Architect's details
void Architect::Print() const
{
    // call base class print function
	Employee::Print();

	// print architect details
	cout << endl << endl << endl;
	cout << "Name           Depart #     Supervisor's Name       Raise %   # of Years Exp\n";
	cout << "-------------  ----------  -----------------       -------    ---------------\n";
	cout << left << setw(15) << GetName() << setw(15) << departNum << setw(22) << supervisor << setw(13) << salaryIncrease << yearsExperience << endl;


	cout << endl << endl;
}
