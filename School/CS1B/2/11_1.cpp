/*
 Day of the Week Scheduler
 Create an enum class called DayOfWeek with values:
 Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, and Sunday.
 Write a program that takes the current day as input (integer 1-7) 
 and prints the next day. If today is Sunday, it should print Monday 
 as the next day.
*/
#include<iostream>
using namespace std;

enum class DayOfWeek
{
    Monday=0, 
    Tuesday, 
    Wednesday, 
    Thursday, 
    Friday, 
    Saturday,
    Sunday 
};

ostream& operator<<(ostream& cout, const DayOfWeek& days)
{
    switch (days)
    {
    case DayOfWeek::Monday:
        cout<<"Monday";
        break;

    case DayOfWeek::Tuesday:
        cout<<"Tuesday";
        break;

    case DayOfWeek::Wednesday:
        cout<<"Wednesday";
        break;

    case DayOfWeek::Thursday:
        cout<<"Thursday";
        break;

    case DayOfWeek::Friday:
        cout<<"Friday";
        break;  
        
    case DayOfWeek::Saturday:
        cout<<"Saturday";
        break;

    case DayOfWeek::Sunday:
        cout<<"Sunday";
        break;
    default:
        break;
    }
    return cout;
}

istream& operator>>(istream& cin, DayOfWeek& days)
{
    int inPutValue;
    cin>>inPutValue;
    days=static_cast<DayOfWeek>(inPutValue%7-1);

    return cin;
}

DayOfWeek& operator+ (DayOfWeek& days,int x)
{
    int tmp;
    tmp=static_cast<int>(days);
    tmp=(tmp+x)%7;
    days=static_cast<DayOfWeek>(tmp);

    return days;
}

DayOfWeek& operator+ (int x,DayOfWeek& days)
{
    int tmp;
    tmp=static_cast<int>(days);
    tmp=(tmp+x)%7;
    days=static_cast<DayOfWeek>(tmp);

    return days;
}

DayOfWeek& operator++ (DayOfWeek& days)
{
    int tmp;
    tmp=static_cast<int>(days);
    tmp=(++tmp)%7;
    days=static_cast<DayOfWeek>(tmp);

    return days;
}

int main()
{
    DayOfWeek Days=DayOfWeek::Monday;

    cout<<"Enter a day: ";
    cin>>Days;
    ++Days;

    cout<<"Next day is: "<<Days;

    return 0;
}