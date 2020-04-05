#include <iostream>
using namespace std;
char a[20]="0Jyouhou";
int main(){
    int n;
    cin>>n;
    char s[10005];
    while (n--){
        int t;
        cin>>t;
        int ans=0;
        for (int i=1;i<=t;i++) cin>>s[i];
        int cnt=1;
        for (int i=1;i<=t;i++){
            if(s[i]==a[cnt]){
                cnt++;
            }
            if(cnt==8)
            {
                cnt=1;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}