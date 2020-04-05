#include <iostream>
using namespace std;
void change(int *,int ,int );
int main(){
    int n,q;
    cin>>n>>q;
    int a[n+10];
    int b[n+10];
    int cnt=0;
    int max;
    while(q--){
        cin.ignore();
        char s[5];
        scanf("%s",s);
        if(s[0]=='1') change(a,s[1]-'0',s[2]-0);
        if(s[0]=='2'){
            if(cnt==0) max=s[1]-'0';
            b[++cnt]=s[1]-'0';
            max=(max,b[cnt]);
            if(max==b[cnt])
        }
    }
    
}
void change (int *a,int i;int x){
    a[i]=x;
}