/*已知类Student定义如下：
	class  Student{
        int id;
        char name[16];
public : 
         // 其它成员函数，根据需要填写, 如构造函数、拷贝构造函数
	};
任务：完成Student类 = 运算符重载
*/
#include <iostream>
#include "Student.h"
using namespace std;
int main(){
    Student s1(161910322,"laopan");
    s1.display();
    Student s2(0,"0");
    s2.display();
    s2=s1;
    s2.display();
    return 0;
}