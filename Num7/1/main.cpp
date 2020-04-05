#include <iostream>
#include "Person.h"
#include "Date.h"
using namespace std;
void Test1()
{
    Person p1,p2("张",'f',Date(1991,1,1)) , p3(p2);
    p3.Print();//输出: “姓名:zhang;性别: 女;生日:1991-1-1;
    cout<<"收支为："<<p3.GetCashFlow()<<"元"<<endl; //输出：0元
    Person *p=new Person("李",'m',Date(1990,2,2));//创建堆对象（调用有参构造）
    p->Print();//输出堆对象基本信息
    delete p;//释放堆对象
    return ;
    }
int main(){
    Test1();
    return 0;
}
