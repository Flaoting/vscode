#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,q;
    cin>>n;
    int a[n+10];
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>q;
    int l[q+5],r[q+5];
    for(int i=1;i<=n;i++) cin>>l[i]>>r[i];
    int ans[n+10];
    for(int i=1;i<=n;i++){
        int val;
        for(int j=1;j<=val;j++){
            check(j,val);
        }
    }
}