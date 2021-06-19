

#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_

#include "Date.h"


class Employee
{
public:

/********************************************************************
 * Default Constructor Employee: class Employee
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a Employee object
 ********************************************************************/
    Employee();

/********************************************************************
 * Alternate Constructor Employee: class Employee
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a emplyee object
 ********************************************************************/
    Employee(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year);

/********************************************************************
 * Destructor ~Employee: class Employee
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a Employee object
 ********************************************************************/
    virtual ~Employee();

/********************************************************************
 * Method SetName: class Employee
 * ------------------------------------------------------------------
 * This method will change the name
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing employee object
 *
 * POST-CONDITIONS
 * changed name
 ********************************************************************/
    void SetName(string newName);

/********************************************************************
 * Method SetId: class Employee
 * ------------------------------------------------------------------
 * This method will change the id
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing employee object
 *
 * POST-CONDITIONS
 * changed id
 ********************************************************************/
    void SetID(int newId);

/********************************************************************
 * Method SetPhoneNumber: class Employee
 * ------------------------------------------------------------------
 * This method will change the phone #
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing employee object
 *
 * POST-CONDITIONS
 * changed phone #
 ********************************************************************/
    void SetPhoneNumber(int newPhoneNum);

/********************************************************************
 * Method SetAge: class Employee
 * ------------------------------------------------------------------
 * This method will change the age
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing employee object
 *
 * POST-CONDITIONS
 * changed age
 ********************************************************************/
    void SetAge(int newAge);

/********************************************************************
 * Method SetGender: class Employee
 * ------------------------------------------------------------------
 * This method will change the gender
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing employee object
 *
 * POST-CONDITIONS
 * changed gender
 ********************************************************************/
    void SetGender(char newGender);

/********************************************************************
 * Method SetJobTitle: class Employee
 * ------------------------------------------------------------------
 * This method will change the job title
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing employee object
 *
 * POST-CONDITIONS
 * changed job title
 ********************************************************************/
    void SetJobTitle(string newTitle);

/********************************************************************
 * Method SetSalary: class Employee
 * ------------------------------------------------------------------
 * This method will change the salary
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing employee object
 *
 * POST-CONDITIONS
 * changed salary
 ********************************************************************/
    void SetSalary(int newSalary);

/********************************************************************
 * Method SetHireDate: class Employee
 * ------------------------------------------------------------------
 * This method will change the hire date
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing employee object
 *
 * POST-CONDITIONS
 * changed hire date
 ********************************************************************/
    void SetHireDate(int month, int day, int year);

/********************************************************************
 * Method Print: class Employee
 * ------------------------------------------------------------------
 * This method will print out the employee details
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * an employee object
 *
 * POST-CONDITIONS
 * employee dm will be printed
 ********************************************************************/
    virtual void Print() const;

/********************************************************************
 * Method GetName: class Employee
 * ------------------------------------------------------------------
 * This method will return the name of the employee
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing employee object
 *
 * POST-CONDITIONS
 * <none>
 ********************************************************************/
    string GetName() const{return name;};
protected:
    string   name;
    int      id;
    long int phoneNum;
    int      age;
    char     gender;
    string   jobTitle;
    int      salary;
	Date     hireDate;



};


#endif
