#ifndef PEOPLE_H_
#define PEOPLE_H_
#include <iostream>
using namespace std;
class People
{
    protected:
        char name[12];//����
        char sex;//�Ա�
        char phone[20];//�绰����
        char ID[20];//����֤��
        char school[30];//����ѧУ
    public:
        People(char *name,char sex,char *phone,char *ID,char *school);
       // ~People();
        void display(){cout << name<<sex<<phone<<ID<<school<<endl;}
};
#endif