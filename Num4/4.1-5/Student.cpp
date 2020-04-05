#include "Student.h"
#include <iostream>
using namespace std;
void Student::showSTD(){
    cout.width(5);
    cout << "Name:"<<name<<endl;
    cout << "Age:"<<age<<endl;
    cout << "ID:"<<ID<<endl;
}
Student::~Student(){ cout<<"destructor was used!"<<endl;}