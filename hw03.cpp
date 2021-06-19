#include "Employee.h"
#include "Date.h"
#include "Programmer.h"
#include "Architect.h"

int main()
{
	Employee   employee1;    // CALC - employee object
	Employee   employee2;    // CALC - employee object
	Programmer programmer;   // CALC - programmer object
	bool       samePhoneNum; // CALC - comparison boolean


	cout << "*****PART 1 (bool compPhoneNum)*****\n\n";

    samePhoneNum = compPhoneNum(employee1, programmer);

    cout << "Comparing the phone numbers of the employee and the programmer...\n";

	cout << (samePhoneNum? "The phone numbers are the same.\n" : "The phone numbers are not the same\n");

	cout << "Changing the employee's phone number...\n";

	employee1.SetPhoneNumber(42423241);

    samePhoneNum = compPhoneNum(employee1, programmer);

    cout << "Comparing the phone numbers of the employee and the programmer...\n";

    cout << (samePhoneNum? "The phone numbers are the same.\n" : "The phone numbers are not the same\n");



    cout << "\n*****PART 2 bool(operator==) *****\n\n";

    samePhoneNum = (employee1 == employee2);

    cout << "Comparing the phone numbers of employee1 and employee2...\n";

    cout << (samePhoneNum? "The phone numbers are the same.\n" : "The phone numbers are not the same\n");

    cout << "Changing employee2's phone number...\n";

    employee2.SetPhoneNumber(42423241);

    samePhoneNum = (employee1 == employee2);

    cout << "Comparing the phone numbers of employee1 and employee2...\n";

    cout << (samePhoneNum? "The phone numbers are the same.\n" : "The phone numbers are not the same\n");






    return 0;
}
