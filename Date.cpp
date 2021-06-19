#include "Date.h"

 // Default Constructor
 Date::Date()
 : month{0}, day{0}, year{0}
 {

 }

// Alternate Constructor
 Date::Date(int month, int day, int year)
 : month{month}, day{day}, year{year}
 {

 }

 // Destructor
 Date::~Date()
 = default;


// Date Setter
 void Date::SetDate(int month, int day, int year)
 {
	 this->month = month;
	 this->day = day;
	 this->year = year;
 }

 // print all dm
 string Date::Print() const
 {
	 string result = " ";

	 // concatenate strings to return proper output
	 month < 10? result += "0" + to_string(month): result += to_string(month);
	 result += "/";
	 day < 10? result += "0" + to_string(day): result += to_string(day);
	 result += "/" + to_string(year);

	 // return results
	 return result;
 }
