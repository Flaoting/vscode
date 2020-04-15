#ifndef PEOPLE_H_
#define PEOPLE_H_
#include <iostream>
using namespace std;
class People
{
    private :
        static int numID;
    protected:
        char name[12];//姓名
        char gender;//性别
        char phone[20];//电话号码
        int ID;//状元阁唯一识别号
    public:
        People(char *name,char sex,char *phone);
        static int checkNumID(){return numID;};
};
#endif