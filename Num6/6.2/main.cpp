#include <iostream>
#include "Point.h"
#include "Point.cpp"
using namespace std;
int main(){
    Point p1(1,1),p2(2,2),p3(1,1),p4(1,6);
    if(p1==p3) cout<<"=="<<endl;
    if(p1!=p2) cout<<"!="<<endl;
    if(p2 >p1) cout<<">"<<endl;
    if(p4>p1) cout<<">"<<endl;
    cout <<p1<<endl<<p2<<endl<<p3<<endl<<p4<<endl;
    return 0;
}