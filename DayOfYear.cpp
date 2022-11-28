#include "DayOfYear.h"

//constructor definitions

DayOfYear::DayOfYear(int theMonth, int theDay)
{
    month = theMonth;
    day = theDay;
    checkDate();
}

//default constructor definition
DayOfYear::DayOfYear()
{
    month = 1;
    day = 1;
}


//function definitions

bool equal(DayOfYear date1, DayOfYear date2)
{
//returns true if the dates are equal
    return (date1.getMonth() == date2.getMonth() && date1.getDay() == date2.getDay());
}


void DayOfYear::input()
{
    cout << "Enter the month as a number: ";
    cin >> month;
    cout << "Enter the day of the month: ";
    cin >> day;
    checkDate();
}

void DayOfYear::output()
{
    cout << "month = " << month << ", day = " << day << endl;
}

void DayOfYear::checkDate()
{
    if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
    {
        throw "Illegal date";
    }
}

int DayOfYear::getMonth()
{
    return month;
}

int DayOfYear::getDay()
{
    return day;
}