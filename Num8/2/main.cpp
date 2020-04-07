/*要求:1）在Rect类基础之上公有派生出长方体类Cube，
新增一个私有数据成员：高度height，
并设计函数成员中getArea函数，覆盖Rect中的同名虚函数，用于计算长方体的表 面积。
2）设计main函数，对以上的两个类进行测试，
其中cube类中getArea函数要求使用基类Rect的指针通过赋值兼容规则进行调用。
*/
#include "Rect.h"
#include "Cube.h"
#include <iostream>
using namespace std;
int main(){
    Rect *p;
    p =new Rect(2,3);
    cout <<p->getArea()<<endl;

    Cube a(1,2,3);
    p=&a;
    cout<<p->getArea()<<endl;
    return 0;
}