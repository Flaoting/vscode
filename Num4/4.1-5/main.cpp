#include "Student.h"
#include "Subject.h"
#include "Student.cpp"
#include <iostream>
#include <string>
#include "Subject.cpp"
using namespace std;
int main(){
    string name,ID;
    int age;
    Student s1("laopan",12,"135431235");
    s1.showSTD();
    s1.~Student();
    //Student s2(15);
    //s2.showSTD();
    //s1.~Student();
    //Student s3("laowang",1665);  
    //s3.showSTD();
    Subject subject("Math",505);
    subject.showSubject();
    Subject s=subject;
    s.showSubject();
    return 0;

}