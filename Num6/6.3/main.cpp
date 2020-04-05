/*已知类Date定义如下：
	class  Date{
int d, m, y; //分别表示天、月、年
public : 
         // 其它成员函数，根据需要填写,如构造函数、拷贝构造函数
	};
任务：①完成Date类的++运算符重载，实现对天数的加1。注意月末加1需要修改天和月，
年末加1需要修改天、月和年。②实现Date类的++前缀和后缀，在主函数中分别调用。*/
#include <iostream>
#include "Data.h"
#include "Data.cpp"
using namespace std;
int main(){
    Data d1(1999,10,23);
    cout<<d1<<endl;

    Data d2=d1++;
    cout<<d2<<endl;
    cout<<d1<<endl;
    return 0;
}