//在上面的工程中添加Person类，包括姓名name（字符数组，包括结束符最长20字符），
//性别gender（字符），生日birthday（Date类对象），人数统计变量count（静态），
//自行设计成员函数，保证满足以下测试要求(在main函数中调用Test1函数)
#ifndef PERSON_H_
#define PERSON_H_
#include "Date.h"
#include <string.h>
#include <string>
#include <iostream>
using namespace std;
class Person{
    private:
        char name[20];
        char gender;
        Date birthday;
    public:
        static int count;
        Person(char *name,char gender,const Date b);
        Person();
        Person(const Person &);
        Person operator = (const Person &);
        int getcount(){return count;};
        void Print();
        int GetCashFlow();
};
Person::Person(char *name,char gender,const Date b){
    strcpy(this->name,name);
    this->gender=gender;
    this->birthday=b;
    count++;
}
Person Person:: operator=(const Person &obj){
    strcpy(this->name,obj.name);
    this->birthday=obj.birthday;
    this->gender=obj.gender;
}
Person::Person(const Person &obj){
    strcpy(this->name,obj.name);
    this->birthday=obj.birthday;
    this->gender=obj.gender;
}
Person::Person(){
    name[1]='0';
    gender='0';
    birthday;
}
void Person::Print(){
    cout<<"姓名: "<<name<<endl;
    cout<<"性别: "<<gender<<endl;
    cout<<"出生日期: ";
    birthday.Print();
}
int Person:: count=0;
int Person::GetCashFlow(){
    return count*5000;
}
#endif