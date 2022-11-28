//Program to demonstrate the function equal.
//The class DayOfYear is similar to last class's example.
#include <iostream>
#include "DayOfYear.h"
using namespace std;


int main()
{
    DayOfYear today, bachBirthday(3, 21);  //declare two DayOfYear objects
    cout << "Enter today's date: \n";
    today.input();   //call input function to set day

    cout << "Today's date is ";
    today.output();   //output today's date

    cout << "J.S. Bach's birthday is ";
    bachBirthday.output();

    if(equal(today, bachBirthday))   //equal function separate from DayOfYear class
        cout << "Happy Birthday Johann Sebastian!\n";
    else
        cout << "Happy Un-Birthday Johann Sebastian!\n";

    return 0;

}

