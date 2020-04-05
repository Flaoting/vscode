#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+10];
    int max1,min1;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        if(i==1){max1=a[i];min1=a[i];}
        max1=max(max1,a[i]);
        min1=min(min1,a[i]);
    }
    bool flag;
    int mid;
    printf("%d ",max1);
    if(a[1]>=a[n]) flag=1;
    if(n%2==0){
        mid=a[n/2]+a[n/2+1];
        if(mid%2==0){
            mid/=2;
            printf("%d",mid);
        }
        else {
            float t;
            t=(float)a[n/2]+(float)a[n/2+1];
            t/=2;
            printf("%.1f",t);
        }
    }
    if(n%2==1){
        mid=a[n/2+1];
        printf("%d",mid);
    }
    printf(" %d",min1);
    return 0;
}