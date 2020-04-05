#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    char s1[100],s2[100],s[300];
    scanf("%s",s1);
    scanf("%s",s2);
    int cnt1=0,cnt2=0,cnt=-1;
    bool flag;
    while(s1[cnt1]!='\0'||s2[cnt2]!='\0'){
        if(s1[cnt1] == '\0')
            while(s2[cnt2]!='\0'){
                s[++cnt]=s2[cnt2++];
                flag=1;
            }
        if(s2[cnt2] == '\0')
            while(s1[cnt1]!='\0'){
                s[++cnt]=s1[cnt1++];
                flag=1;
            }
        if(flag==1) break;
        if(s1[cnt1]<s2[cnt2]){
            s[++cnt]=s1[cnt1++];
        }
        else 
            s[++cnt]=s2[cnt2++];
    }
    s[++cnt]='\0';
    printf("%s",s);
    return 0;
}