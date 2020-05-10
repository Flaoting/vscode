/*从Person类以public方式派生Student类，
添加学号stuId，就读时间（年）stuDuration
每年学费tuition(固定为5000元)，自行设计成员函数，要求满足以下测试要求：*/
#include <iostream>
#include "Person.h"
#include "Student.h"
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
void Test2()
{
    Student s1(),s2("张小斐",'m',Date(1992,1,1),1001);
   
    s2.Print(); //输出如下:
    //姓名:zhang; 性别: 男; 生日:1992-1-1;
    //学号:1001; 就读时间:0年
    
    cout<<endl;
    s2.SetDuration(2);
    s2.Print();
    //姓名:zhang; 性别: 男; 生日:1992-1-1;
    //学号:1001; 就读时间:2年
    cout<<endl<<"学费支出"<<s2.GetCashFlow()<<"元"<<endl;
    //学费支出：10000元
   
    Student *p=new Student; //堆对象创建（调用无参构造）
    delete p;//释放堆对象
}
int  main(){
Test1();//测试Person类
Test2();//测试Student类
return 0;
}

