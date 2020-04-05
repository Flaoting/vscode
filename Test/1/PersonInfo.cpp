#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
class  PersonInfo
{
private:
    char *name;
    int age;
public:
     PersonInfo(char *name,int age);
     PersonInfo(PersonInfo &obj);
    PersonInfo operator= (const PersonInfo &obj);
    ~ PersonInfo();
    void display(){
        printf("%s",name);
        cout<<" "<<age<<endl;}
};
PersonInfo ::PersonInfo(char *name ,int age){
    this->name =new char [strlen(name)+1];
    strcpy(this->name,name);
    this->age=age;
}
PersonInfo::PersonInfo(PersonInfo &obj){
    name =new char [strlen (obj.name)+1];
    strcpy(this->name,name);
    this->age=age;
}
PersonInfo PersonInfo::operator =(const PersonInfo &obj){
    delete [] name;
    name=new char [strlen(obj.name)+1];
    strcpy(this->name,obj.name);
    this->age=obj.age;
    return *this;
}
PersonInfo::~PersonInfo(){delete []name;}
int main(){
    char name[20]="John";
    int age=10;
    PersonInfo person1(name,age);
    person1.display();
    char nam[20]="Ste";
    age=15;
    PersonInfo person2(nam,age);
    person2.display();
    person2=person1;
    person2.display();
    return 0;
}