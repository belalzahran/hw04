#include "Employee.h"
#include "Date.h"
#include "Programmer.h"
#include "Architect.h"

int main()
{
	cout << "EMPLOYEES:\n";

	// employee non-default constructor

    Employee buddy("John", 1232, 94991074, 25, 'M', "Janitor", 5500000, 11,2,2002);

	// employee default constructor

	Employee defaultEmp;

    // testing set functions on the default employee

    // print before
    defaultEmp.Print();

    // testing set functions
    defaultEmp.SetName("Linda");
    defaultEmp.SetID(6359);
    defaultEmp.SetPhoneNumber(223432334);
    defaultEmp.SetAge(24);
    defaultEmp.SetGender('F');
    defaultEmp.SetJobTitle("CEO");
    defaultEmp.SetSalary(230000);
    defaultEmp.SetHireDate(2,2,1970);


    cout << "\n\n******AFTER TESTING SET FUNCTIONS******\n";
    // print after
    defaultEmp.Print();


    cout << "\n\n\n";

    ////////////////////////////////////////////////////////////////


    cout << "PROGRAMMERS:\n";
    // programmer non-default constructor

    Programmer belal("Belal Zahran", 5011, 94991074, 18, 'M', "Intern", 10000, 8,9,2002, 69, "Marwa Jalal", .05, true, true);

    // programmer default constructor

    Programmer jake;

      // testing setfunctions on the default programmer

    // print before
    jake.Print();

    jake.SetName("Jake");
    jake.SetID(92369);
    jake.SetPhoneNumber(223432334);
    jake.SetAge(24);
    jake.SetGender('M');
    jake.SetJobTitle("CEO");
    jake.SetSalary(100000);
    jake.SetHireDate(2,2,1970);
    jake.SetDepartNum(231);
    jake.SetSupervisor("Bobby");
    jake.SetSalaryIncrease(.03);
    jake.SetCPlusPlus(true);
    jake.SetJava(false);

    cout << "******AFTER TESTING SET FUNCTIONS******\n";
    // print after
    jake.Print();


    cout << "\n\n\n";




    ////////////////////////////////////////////////////////////////


   cout << "SOFTWARE ARCHITECTS:\n";
   // programmer non-default constructor

   Architect layla("Layla", 5321, 942343074, 28, 'F', "Intern", 120000, 2,9,2012, 29, "Marwa Jalal", .05, 6);

   // programmer default constructor

   Architect dan;

	 // testing setfunctions on the default programmer

   // print before
   dan.Print();

   dan.SetName("Dan");
   dan.SetID(23);
   dan.SetPhoneNumber(12341352);
   dan.SetAge(24);
   dan.SetGender('M');
   dan.SetJobTitle("Manager");
   dan.SetSalary(1022320);
   dan.SetHireDate(2,2,1970);
   dan.SetDepartNum(231);
   dan.SetSupervisor("Bobby");
   dan.SetSalaryIncrease(.03);
   dan.SetYearsExperience(32);

   cout << "******AFTER TESTING SET FUNCTIONS******\n";
   // print after
   dan.Print();


   cout << "\n\n\n";



    return 0;
}
