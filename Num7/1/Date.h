#ifndef DATA_H_
#define DATA_H_
#include <iostream>
using namespace std;

class Date
{
    private:
        int year,month,day;
    public:
        Date(int year=1990,int month=1,int day=1);
        Date(const Date &obj);
        void Print();
};
Date::Date(int year,int month,int day)
{
    this->year=year;
    this->month=month;
    this->day=day;
}
Date::Date(const Date &obj)
{
    year=obj.year;
    month=obj.month;
    day=obj.day;
}
void Date::Print()
{
    cout<<year<<'-'<<month<<'-'<<day<<endl;
}
#endif


