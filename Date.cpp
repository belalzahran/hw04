#include "hw03.h"
#include "Date.h"

 Date::Date()
 {
	 month = 0;
	 day = 0;
	 year = 0;
 };

 Date::Date(int month, int day, int year) : month(month), day(day), year(year)
 {

 }

 Date::~Date()
 {

 }

 void Date::SetDate(int month, int day, int year)
 {
	 this->month = month;
	 this->day = day;
	 this->year = year;
 }

 string Date::Print() const
 {
	 string result = " ";

	 month < 10? result += "0" + to_string(month): result += to_string(month);
	 result += "/";
	 day < 10? result += "0" + to_string(day): result += to_string(day);
	 result += "/" + to_string(year);

	 return result;
 }
