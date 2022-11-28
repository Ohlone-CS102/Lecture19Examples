#include <iostream>

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

using namespace std;


//DayOfYear class declaration
class DayOfYear {
public:
    /**
     * Constructor, sets the month and day
     * @param theMonth
     * @param theDay
     */
    DayOfYear(int theMonth, int theDay);
    /**
     * Constructor, day and month are set to the defaults
     */
    DayOfYear();
    /**
     * Collects date from cin
     */
    void input();
    /**
     * Display's information about the date
     */
    void output();

    /**
     * @return The month
     */
    int getMonth();
    /**
     * @return the day
     */
    int getDay();

private:
    /**
     * throws an Illegal date error is the date is not valid.
     */
    void checkDate();
    int month;   //private variable for month
    int day;//private variable for day

};

//declare equal function outside of the DayOfYear class
bool equal(DayOfYear date1, DayOfYear date2);



#endif // DAYOFYEAR_H
