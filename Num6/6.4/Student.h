#ifndef STD_H_
#define STD_H_
#include <string.h>
#include <iostream>
using namespace std;
class Student
{
private:
    int ID;
    char name[16];
public:
    Student(int ID,char *name){
        this->ID=ID;
        strcpy(this->name,name);
    }
    void Stuendt(Student &obj){
        strcpy(name,obj.name);
        this->ID=obj.ID;
    }
    void display(){
        cout <<"ID: "<<ID<<"  Name: "<<name<<endl;
    }
};
#endif