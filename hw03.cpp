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


    cout << "***** PART 1 (bool compPhoneNum) *****\n\n";

    samePhoneNum = compPhoneNum(employee1, programmer);

    cout << "Comparing the phone numbers of the employee and the programmer...samePhoneNum = compPhoneNum(employee1, programmer);\n";

    cout << (samePhoneNum? "The phone numbers are the same.\n" : "The phone numbers are not the same\n");

    cout << "Changing the employee's phone number...\n";

    employee1.SetPhoneNumber(42423241);

    samePhoneNum = compPhoneNum(employee1, programmer);

    cout << "Comparing the phone numbers of the employee and the programmer...samePhoneNum = compPhoneNum(employee1, programmer);\n";

    cout << (samePhoneNum? "The phone numbers are the same.\n" : "The phone numbers are not the same\n");



    cout << "\n***** PART 2 bool(operator==) *****\n\n";

    samePhoneNum = (employee1 == employee2);

    cout << "Comparing the phone numbers of employee1 and employee2...samePhoneNum = (employee1 == employee2);\n";

    cout << (samePhoneNum? "The phone numbers are the same.\n" : "The phone numbers are not the same\n");

    cout << "Changing employee2's phone number...\n";

    employee2.SetPhoneNumber(42423241);

    samePhoneNum = (employee1 == employee2);

    cout << "Comparing the phone numbers of employee1 and employee2...samePhoneNum = (employee1 == employee2);\n";

    cout << (samePhoneNum? "The phone numbers are the same.\n" : "The phone numbers are not the same\n");



    cout << "\n***** PART 3 Addition mf *****\n\n";

    cout << "Printing employee1's current age: " << employee1.GetAge() << "\n";

    cout << "Adding 25 years to employee1's age with age addition function...employee1.AddToge(25)\n";

    employee1.AddToge(25);

    cout << "Printing employee1's new age: " << employee1.GetAge() << endl;



    cout << "\n***** PART 4 Overloaded(+) *****\n\n";

    cout << "Printing employee1's current age: " << employee1.GetAge() << "\n";

    cout << "Adding 15 years to employee1's age with overloaded addition operator...+(employee1)\n";

    +employee1;

    cout << "Printing employee1's new age: " << employee1.GetAge();



    cout << "\n\n***** PART 5 Overloaded(<<) *****\n\n";

    cout << "Printing employee1's info using overloaded insertion operator...cout << employee1\n";

    cout << employee1;

    cout << "\nadding a name to employee1...employee1.SetName(\"Elizabeth\")\n";

    employee1.SetName("Elizabeth");

    cout << "Printing employee1's info using overloaded insertion operator...cout << employee1\n";

    cout << employee1;



    cout << "\n\n***** PART 5 Overloaded(>>) *****\n\n";

    cout << "Extracting info for employee1 info using overloaded extraction operator...cin >> employee1\n";

    cin >> employee1;

    cout << "Printing employee1's info using overloaded insertion operator...cout << employee1\n";

    cout << employee1;



    cout << "\n\n***** EXTRA CREDIT Overloaded(pre/post ++) *****\n\n";


    cout << "Employee1's age before pre-increment: " << employee1.GetAge() << endl;

    cout << "Calling pre-increment...\n";
    operator++(employee1);


    cout << "Employee1's age after pre-increment: " << employee1.GetAge() << endl << endl;


    cout << "Employee1's age before post-increment: " << employee1.GetAge() << endl;

    cout << "Calling post-increment...\n";
    operator++(employee1,0);

    cout << "Employee1's age after pre-increment: " << employee1.GetAge() << endl;


    return 0;
}
