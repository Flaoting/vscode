//������Ĺ��������Person�࣬��������name���ַ����飬�����������20�ַ�����
//�Ա�gender���ַ���������birthday��Date����󣩣�����ͳ�Ʊ���count����̬����
//������Ƴ�Ա��������֤�������²���Ҫ��(��main�����е���Test1����)
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
    cout<<"����: "<<name<<endl;
    cout<<"�Ա�: "<<gender<<endl;
    cout<<"��������: ";
    birthday.Print();
}
int Person:: count=0;
int Person::GetCashFlow(){
    return count*5000;
}
#endif