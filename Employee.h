

#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_

#include "Date.h"
#include "hw03.h"


class Employee
{
public:
    Employee();
    Employee(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year);
    virtual ~Employee();

    void SetName(string newName);
    void SetID(int newId);
    void SetPhoneNumber(int newPhoneNum);
    void SetAge(int newAge);
    void SetGender(char newGender);
    void SetJobTitle(string newTitle);
    void SetSalary(int newSalary);
    void SetHireDate(int month, int day, int year);

    virtual void Print() const;
    string GetName() const{return name;};
protected:
    string name;
    int    id;
    long long int phoneNum;
    int    age;
    char   gender;
    string jobTitle;
    int    salary;
	Date hireDate;



};


#endif
