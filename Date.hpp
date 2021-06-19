#ifndef DATE_HPP_
#define DATE_HPP_

#include "hw03.hpp"

class Date
{

public:
    Date();
    Date(int month, int day, int year);
    ~Date();

    void SetDate(int month, int day, int year);
    
    string Print() const;

private:
    int month;
    int day;
    int year;

};


#endif










