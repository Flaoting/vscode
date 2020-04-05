#pragma once
#include <string>
using namespace std;
class Student {
    private :
        string name;
        int age;
        string ID;// 学号
    public:
        Student(string nam,int ag, string I){name=nam; age=ag; ID=I;}
        Student(string nam,int ag){name=nam; age=ag; ID="1111111";}
        Student(string nam, string I){name=nam; age=000; ID=I;}
        Student(int ag, string I){name="2222222"; age=ag; ID=I;}
        Student(int ag){name="3333333"; age=ag; ID="4444444";}

        void setAge(int ag){ age=ag;name="88888";ID="99999";}
        int getAge(){return age;};
        
        void setName(string nam){name=nam;}
        string getName(){return name;}
        
        void setID(string I){ID=I;}
        string getID(){return ID;}
        
        void showSTD();
        ~Student();
};