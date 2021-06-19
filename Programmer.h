/*
 * Programmer.h
 *
 *  Created on: Jun 15, 2021
 *      Author: bz
 */

#ifndef PROGRAMMER_HPP_
#define PROGRAMMER_HPP_

#include "Employee.h"
#include "Date.h"


class Programmer: public Employee
{

public:

/********************************************************************
 * Default Constructor Programmer: class Programmer
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a programmer object
 ********************************************************************/
	Programmer();

/********************************************************************
 * Alternate Constructor Programmer: class Programmer
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a programmer object
 ********************************************************************/
	Programmer(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month,
           int day, int year, int departNum, string supervisor, float salaryIncrease, bool cPlusPlus, bool java);

/********************************************************************
 * Destructor ~Programmer: class Programmer
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a programmer object
 ********************************************************************/
	~Programmer() override;

/********************************************************************
 * Method SetDepartNum: class Programmer
 * ------------------------------------------------------------------
 * This method will change the department number
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing programmer object
 *
 * POST-CONDITIONS
 * changed department #
 ********************************************************************/
	void SetDepartNum(int newDepartmentNum);

/********************************************************************
 * Method SetSupervisor: class Programmer
 * ------------------------------------------------------------------
 * This method will change the department number
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing programmer object
 *
 * POST-CONDITIONS
 *  changed supervisor dm
 ********************************************************************/
	void SetSupervisor(string newSupervisor);

/********************************************************************
 * Method SetSalaryIncrease: class Programmer
 * ------------------------------------------------------------------
 * This method will change the department number
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing programmer object
 *
 * POST-CONDITIONS
 * changed salary increase dm
 ********************************************************************/
	void SetSalaryIncrease(float newSalaryIncrease);

/********************************************************************
 * Method SetCPlusPlus: class Programmer
 * ------------------------------------------------------------------
 * This method will change the department number
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing programmer object
 *
 * POST-CONDITIONS
 * changed c++ dm
 ********************************************************************/
	void SetCPlusPlus(bool newCPlusPlus);


/********************************************************************
 * Method SetJava: class Programmer
 * ------------------------------------------------------------------
 * This method will change the department number
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing programmer object
 *
 * POST-CONDITIONS
 * changed java dm
 ********************************************************************/
	void SetJava(bool newJava);

/********************************************************************
 * Method Print: class Programmer
 * ------------------------------------------------------------------
 * This method will print out the programmer's details
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * an existing programmer
 *
 * POST-CONDITIONS
 * programmers details printed to console
 ********************************************************************/
	void Print() const override;

private:

	int    departNum;
	string supervisor;
	float  salaryIncrease;
	bool   cPlusPlus;
	bool   java;

};


#endif /* PROGRAMMER_H_ */
