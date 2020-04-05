#include <iostream>
#include <string>
#include "People.h"
#include "people.cpp"
using namespace std;
int main(){
    float mo,fa;
    char se,spo,die;
    cout<<"请输入父亲身高："; cin>>fa; cout<<endl;
    cout<<"请输入母亲身高："; cin>>mo; cout<<endl;
    cout<<"输入字符F表示女性，输入字符M表示男性"<<endl;
    cin.ignore();
    cout<<"请输入孩子性别："; cin>>se; cout<<endl;
    cout<<"输入字符Y表示良好，输入字符N表示不好";
    cin.ignore();
    cout<<endl;
    cout<<"请输入是否有良好的饮食习惯条件"; cin>>die; cout<<endl;
    cin.ignore();
    cout<<"输入字符Y表示喜爱，输入字符N表示不喜爱";
    cout<<endl;
    cout<<"请输入是否喜爱体育锻炼"; cin>>spo; cout<<endl;
    People people(fa,mo,se,spo,die);
    people.forecastHeight();
    cout<<"孩子的预测身高是：";
    cout<<people.getHeight()<<endl;
    cout<<"感谢您使用本测试方法！！！";
    return 0;
    
}

