#include "People.h"
#include "People.cpp"
#include <iostream>
using namespace std;
int main(){
    char name[20]="������";
    char sex='F';
    char phone[20]="132132321232";
    char ID[20]="132121313213";
    char school[30]="��������";
    cin>>school;
    cout<<strlen(name);
    People P1(name,sex,phone,ID,school);
    P1.display();
    return 0;
}
