#ifndef DATE_HPP_
#define DATE_HPP_

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Date
{

public:
/********************************************************************
 * Default Constructor Date: class Date
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a deck of cards (size = 52)
 ********************************************************************/
    Date();

/********************************************************************
 * Alternate Constructor Date: class Date
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a deck of cards (size = 52)
 ********************************************************************/
    Date(int month, int day, int year);

/********************************************************************
 * Destructor ~Date: class Date
 * ------------------------------------------------------------------
 * This destructs the object
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * the object will be destructed automatically
 ********************************************************************/
    ~Date();

/********************************************************************
 * Method SetDate: class Date
 * ------------------------------------------------------------------
 * This method will change the date of the object
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing date object
 *
 * POST-CONDITIONS
 * changed date dm
 ********************************************************************/
    void SetDate(int month, int day, int year);

/********************************************************************
 * Method Print: class Date
 * ------------------------------------------------------------------
 * This method will print out the date
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * a Date
 *
 * POST-CONDITIONS
 * date will be printed
 ********************************************************************/
    string Print() const;

private:
    int month;
    int day;
    int year;

};


#endif










