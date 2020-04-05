#include <iostream>
#include "Student.h"
using namespace std;
int main(){
    char na[20]="laopan";
    Student s1(161910322,na);
    char name[200];
    cin>>name;
    Student s2(161910323,name);
    //cout<<sizeof(name)<<endl;
    //cout << s2.getname()<<endl;
    return 0;
}