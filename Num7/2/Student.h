/*从Person类以public方式派生Student类，
添加学号stuId，就读时间（年）stuDuration
每年学费tuition(固定为5000元)，自行设计成员函数，要求满足以下测试要求：*/
#ifndef STUDENT_H_
#define STUDENT_H_
#include "Person.h"
#include <iostream>
using namespace std;
class Student : public Person{
    private :
        int stuID;
        int stuDuration;
        const int tuition;
    public: 
        Student (char *name,char gender,const Date b,int stuID);
        void SetDuration(int Dur){this->stuDuration=Dur;}
        void Print();
        Student();
};
Student::Student(char *name,char gender,const Date b,int stuID):Person( name,gender,b),tuition(5000){
    this->stuID=stuID;
    this->stuDuration=0;
}
void Student::Print(){
    Person::Print();
    cout<<"学号："<<stuID<<endl;
    cout<<"就读时间："<<stuDuration<<"年"<<endl;
}
Student :: Student():tuition(5000){
    stuID=00000;
    stuDuration=0;
}
#endif