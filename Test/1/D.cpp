#include <iostream>
using namespace std;
char s[70];
void change(long long);
int n;
long long X;
int main(){
    cin>>n>>X;
    cin.ignore();
    for(int i=0;i<62;i++)scanf("%c",&s[i]);
    cin.ignore();
    while(n--){
        char cc=getchar();cc=getchar();
        long long av;
        scanf("%lld",&av);
        av^=X;
        change(av);
        cin.ignore();
    }
    return 0;
}
void change (long long w){
    int ans[100],cnt=0;
    for(int i=1;w!=0;i++)   
        {
            ans[i]=w%62;
            w/=62;
            cnt++;
        }
    cout<<"BV";
    for(int i=cnt ;i>=1;i--) cout<<s[ans[i]];
    cout <<endl;
    return ;
}