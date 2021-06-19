/*
 * Programmer.h
 *
 *  Created on: Jun 15, 2021
 *      Author: bz
 */

#ifndef PROGRAMMER_HPP_
#define PROGRAMMER_HPP_

#include "Employee.hpp"
#include "hw03.hpp"
#include "Date.hpp"


class Programmer: public Employee
{

public:

	Programmer();
	Programmer(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year, int departNum, string supervisor, float salaryIncrease, bool cPlusPlus, bool java);
	virtual ~Programmer();

	void SetDepartNum(int newDepartmentNum);
	void SetSupervisor(string newSupervisor);
	void SetSalaryIncrease(float newSalaryIncrease);
	void SetCPlusPlus(bool newCPlusPlus);
	void SetJava(bool newJava);

	virtual void Print() const;

private:

	int departNum;
	string supervisor;
	float salaryIncrease;
	bool cPlusPlus;
	bool java;

};


#endif /* PROGRAMMER_H_ */