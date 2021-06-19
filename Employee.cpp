#include "Employee.h"
#include "Date.h"

// Default Constructor
Employee::Employee()
: hireDate(0, 0, 0), name{" "}, id{0}, phoneNum{0}, age{0}, gender{' '}, jobTitle{" "}, salary{0}
{

}

// Alternate Constructor
Employee::Employee(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year)
: hireDate(month, day, year), name{name}, id{id}, phoneNum{phoneNum}, age{age}, gender{gender}, jobTitle{jobTitle}, salary{salary}
{

}

// Destructor
Employee::~Employee()
= default;


// SETTER FUNCTIONS
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


// function to add years to age
void Employee::AddToge(int num)
{
    age += num;
}



// Print function to print out employee's details
void Employee::Print() const
{
	string salary1; // CALC & OUT- string to be concatenated w details
	salary1 = "$" + to_string(salary);

	cout << endl << endl;

	cout << " Name          ID      Phone       Age   Gender   Job Title   Salary   Hire Date\n";
	cout << "------------- ------  ----------- -----  -------  ---------- -------- ----------\n";
    cout << left << setw(14) << name << setw(8) << id << setw(13) << phoneNum
    << setw(9) << age << setw(7) << gender << setw(10) << jobTitle
	<< setw(8) << salary1 << setw(13) << hireDate.Print() << endl;


}

/********************************************************************
 * Overloaded operator==
 * ------------------------------------------------------------------
 * This method will compare the phone numbers of two employees
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * 2 existing employee objects
 *
 * POST-CONDITIONS
 * <none>
 ********************************************************************/
bool operator==(const Employee& emp1, const Employee& emp2)
{
    bool same;
    same = emp1.GetPhoneNumber() == emp2.GetPhoneNumber();
    return same;
}

/********************************************************************
 * Overloaded operator+
 * ------------------------------------------------------------------
 * This method will add 15 years to an employee's age
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * 1 existing employee objects
 *
 * POST-CONDITIONS
 * 15 years added to employee's age
 ********************************************************************/
void operator+(Employee& emp)
{
    emp.AddToge(15);
}

/********************************************************************
 * Overloaded operator<<
 * ------------------------------------------------------------------
 * This method will insert employee info into the output stream
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * 1 existing employee objects
 *
 * POST-CONDITIONS
 * <none>
 ********************************************************************/
ostream& operator<<(ostream& o, Employee& emp)
{
    o << "The employee's name is " << emp.GetName() << ", they are " << emp.GetAge() <<
    " years old, and their phone number is " << emp.GetPhoneNumber();
    return o;
}

/********************************************************************
 * Overloaded operator>>
 * ------------------------------------------------------------------
 * This method will extract info from the input buffer and
 * put it in the employee object
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * 1 existing employee object
 *
 * POST-CONDITIONS
 * changed dm
 ********************************************************************/
istream& operator>>(istream& i, Employee& emp)
{
    cout << "Enter Employee Name: ";
    getline(cin,emp.name);
    cout << "Enter Employee Age: ";
    i >> emp.age;
    cout << "Enter Employee's Phone#: ";
    i >> emp.phoneNum;
    return i;
}

 void operator++(Employee& emp, int x) // POST
 {
    emp.age = emp.age++;
 }

 void operator++(Employee& emp)// PRE
 {
    emp.age = ++emp.age;
 }