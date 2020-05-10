/*��Person����public��ʽ����Student�࣬
���ѧ��stuId���Ͷ�ʱ�䣨�꣩stuDuration
ÿ��ѧ��tuition(�̶�Ϊ5000Ԫ)��������Ƴ�Ա������Ҫ���������²���Ҫ��*/
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
    cout<<"ѧ�ţ�"<<stuID<<endl;
    cout<<"�Ͷ�ʱ�䣺"<<stuDuration<<"��"<<endl;
}
Student :: Student():tuition(5000){
    stuID=00000;
    stuDuration=0;
}
#endif