#include <ostream>
#include "Data.h"
using namespace std;
void Data::simplify(){
    if (month==2){
        if(RUN){
            if(day>29)
                while(day>29){
                    month++;
                    day-=29;
                }
        }
        else {
            if(day>28)
                while(day>28){
                    month++;
                    day-=28;
                }
        }
    }
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        if(day>31){
            while(day>31){
                    month++;
                    day-=31;
                }
        }
    }
    if(month==4||month==6||month==9||month==11){
        if(day>30){
            while(day>30){
                    month++;
                    day-=30;
                }
        }
    }
    if(month>12){
        while(month>12){
            year++;
            month-=12;
        }
    }
}
bool Data::isRUN(){
    if(year%4!=0) return false;
    if(year%4==0){
        if (year%100==0&year%400!=0)   
            return false;
        return true;
    }
}
Data Data::operator ++ (){
    day++;
    simplify();
    return *this ;
}
Data Data::operator ++ (int){
    Data temp=*this;
    day++;
    simplify();
    return temp;
}
ostream &operator << (ostream &strm,Data &obj){
    strm<<"Year: "<<obj.year<<" Month: "<<obj.month<<" Day: "<<obj.day<<endl;
    return strm;
}