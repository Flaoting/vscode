#include <iostream>
#include "Person.h"
#include "Date.h"
using namespace std;
void Test1()
{
    Person p1,p2("��",'f',Date(1991,1,1)) , p3(p2);
    p3.Print();//���: ������:zhang;�Ա�: Ů;����:1991-1-1;
    cout<<"��֧Ϊ��"<<p3.GetCashFlow()<<"Ԫ"<<endl; //�����0Ԫ
    Person *p=new Person("��",'m',Date(1990,2,2));//�����Ѷ��󣨵����вι��죩
    p->Print();//����Ѷ��������Ϣ
    delete p;//�ͷŶѶ���
    return ;
    }
int main(){
    Test1();
    return 0;
}
