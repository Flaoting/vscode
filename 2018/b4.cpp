/*4. 设计一个雇员类Employee, 有以下数据成员：姓名char name[12]、
工号(int类型)收入(float类型), 静态数据成员雇员总人数 int num。
设计构造函数完成数据成员的初始化、拷贝构造函数和必要的成员函数，
添加静态成员函数返回雇员总人数。编写主程序输入三个雇员，显示每个人姓名和收入，并计算平均收入。*/
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
class Employee{
    private:
        char name[12];
        int ID;
        float money;
        static int num;
    public: 
        Employee(char *name,int ID,float money);
        Employee(Employee &obj);
        static int getNum(){return num;}
        void display();
        float getSalary();
};
Employee::Employee(char *name,int ID,float money){
    num++;
    strcpy(this->name,name);
    this->ID=ID;
    this->money=money;
}
int Employee::num=0;
Employee::Employee(Employee &obj){
    strcpy(this->name,obj.name);
    this->ID=obj.ID;
    this->money=obj.money;
}
void Employee::display(){
    cout <<name<<" "<<ID<<" "<<money<<endl;
}
float Employee::getSalary(){
    return money;
}
int main(){
    char n1[15],n2[15],n3[15];
    
    Employee e1(n1,12,124),e2(n2,235,468),e3(n3,444,589);
    e1.display();
    e2.display();
    e3.display();
    float sum=0;
    sum=e1.getSalary()+e2.getSalary()+e3.getSalary();
    sum/=e3.getNum();
    cout <<sum<<endl;
}