#ifndef DATA_H_
#define DATA_H_
#include <ostream>
using namespace std;
class Data
{
private:
    int day,month,year;
    bool RUN;
public:
    Data(int year=1,int month=1,int day=1970){this->day=day;this->month=month;this->year=year;RUN=isRUN();}
    void simplify();
    Data operator ++ ();
    Data operator ++ (int);
    bool isRUN();
    friend ostream &operator << (ostream &strm,Data &obj);
};
#endif