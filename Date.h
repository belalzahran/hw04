#ifndef DATE_H_
#define DATE_H_

#include "../hw03part2/hw03.h"

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










