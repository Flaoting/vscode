/*已知类Student定义如下：
class  Student{
        int id;
        char* name;
public : 
         // 其它成员函数，根据需要填写，如构造函数、拷贝构造函数
};
在Student类的构造函数中采用new动态分配内存。实现main函数，并创建2个Student对象。，
*/
#ifndef STD_H_
#define STD_H_
#include <string.h>
#include <iostream>
using namespace std;
class Student{
    private:
        int ID;
        char *name;
    public:
        Student(int ID,char *nam){
            cout <<sizeof(name)<<endl;
            this->ID=ID;
            this->name=new char [strlen(nam)+1];
            strcpy(name,nam);
            cout <<sizeof(name)<<endl;
        }
        Student(Student &obj){
            ID=obj.ID;
            delete []name;
            name=new char [strlen(obj.name)+1];
            strcpy(name,obj.name);
        }
        char *getname(){
            return name;
        }
};
#endif