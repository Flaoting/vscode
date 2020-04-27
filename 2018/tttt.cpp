#include <iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    char str[105];
    cin>>a>>b>>c>>d>>e>>f;
    getchar();
    cin>>str;
    int len=strlen(str);
    int temp1;
    for(int i=0;i<len-1;i++){
        if(str[i]=='E'){
           temp1=c;
           c=a;
           a=d;
           d=f;
           f=temp1;
        }
        else if(str[i]=='S'){
           temp1=e;
           b=a;
           f=b;
           e=f;
           a=temp1;
        }
        else if(str[i]=='N'){
            temp1=a;
            a=b;
            b=f;
            f=e;
            e=temp1;
        }
        else if(str[i]=='W'){
            temp1=f;
            a=c;
            d=a;
            f=d;
            c=temp1;
        }
    }
    cout<<a;
    return 0;
}