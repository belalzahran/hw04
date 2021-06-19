/*
 * Architect.h
 *
 *  Created on: Jun 15, 2021
 *      Author: bz
 */

#ifndef ARCHITECT_HPP_
#define ARCHITECT_HPP_

#include "Employee.h"
#include "hw03.h"
#include "Date.h"



class Architect: public Employee
{

public:

	Architect();
	Architect(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year, int departNum, string supervisor, float salaryIncrease, int yearsExperience);
	virtual ~Architect();

	void SetDepartNum(int newDepartmentNum);
	void SetSupervisor(string newSupervisor);
	void SetSalaryIncrease(float newSalaryIncrease);
	void SetYearsExperience(int newYearsExperience);

	virtual void Print() const;
private:

	int departNum;
	string supervisor;
	float salaryIncrease;
	int yearsExperience;


};


#endif /* ARCHITECT_H_ */
