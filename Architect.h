/*
 * Architect.h
 *
 *  Created on: Jun 15, 2021
 *      Author: bz
 */

#ifndef ARCHITECT_HPP_
#define ARCHITECT_HPP_

#include "Employee.h"
#include "Date.h"



class Architect: public Employee
{

public:

/********************************************************************
 * Default Constructor Architect: class Architect
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a Architect object
 ********************************************************************/
	Architect();

/********************************************************************
 * Alternate Constructor Architect: class Architect
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a Architect object
 ********************************************************************/
    Architect(string name, int id, int phoneNum, int age, char gender, string jobTitle, int salary, int month, int day, int year, int departNum, string supervisor, float salaryIncrease, int yearsExperience);

/********************************************************************
 * Destructor ~Architect: class Architect
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a Architect object
 ********************************************************************/
    ~Architect() override;

/********************************************************************
 * Method SetDepartNum: class Architect
 * ------------------------------------------------------------------
 * This method will change the department number
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing Architect object
 *
 * POST-CONDITIONS
 * changed department #
 ********************************************************************/
    void SetDepartNum(int newDepartmentNum);

/********************************************************************
 * Method SetSupervisor: class Architect
 * ------------------------------------------------------------------
 * This method will change the supervisor
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing Architect object
 *
 * POST-CONDITIONS
 * changed supervisor
 ********************************************************************/
    void SetSupervisor(string newSupervisor);

/********************************************************************
 * Method SetSalaryIncrease: class Architect
 * ------------------------------------------------------------------
 * This method will change the department number
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing Architect object
 *
 * POST-CONDITIONS
 * changed Salary increase
 ********************************************************************/
    void SetSalaryIncrease(float newSalaryIncrease);

/********************************************************************
 * Method SetYearsExperience: class Architect
 * ------------------------------------------------------------------
 * This method will change the years of experience
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing Architect object
 *
 * POST-CONDITIONS
 * changed years of experience
 * changed years of experience
 ********************************************************************/
    void SetYearsExperience(int newYearsExperience);

/********************************************************************
 * Method Print: class Architect
 * ------------------------------------------------------------------
 * This method will print out the Architect's details
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * an existing Architect
 *
 * POST-CONDITIONS
 * Architect's details printed to console
 ********************************************************************/
    void Print() const override;

private:

	int    departNum;
	string supervisor;
	float  salaryIncrease;
	int    yearsExperience;


};


#endif /* ARCHITECT_H_ */
