#include "Point.h"
#include <iostream>
using namespace std;
bool Point::operator==(const Point &obj){
    if(x==obj.x&&y==obj.y)
        return true;
    return false;
}
bool Point::operator!=(const Point &obj){
    if(x!=obj.x)
        return true;
    if(y!=obj.y)
        return true;
    return false;
}
bool Point ::operator>(const Point &obj){
    if (this->x>obj.x)
        return true;
    else if (this->x==obj.x){
        if(this->y>obj.y)
            return true;
    }
    return false;
}
ostream &operator <<(ostream &strm,Point &obj){
    strm<<"x: "<<obj.x<<" y: "<<obj.y<<endl;
    return strm;
}