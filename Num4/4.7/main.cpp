#include <iostream>
#include "Student.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    Student stu[10];
    for (int i=1;i<=n;i++){
        double score;
        cin>>score;
        stu[i].account(score);
    }
    double aver=Student::average();
    double sum=Student::sum();
    cout <<sum<<endl<<aver<<endl;
    return 0;
}
