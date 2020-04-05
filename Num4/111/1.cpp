#include <iostream>
using namespace std;
long long  f(int x){
    if(x==1||x==2)
        return 1;
    else return (f(x-1)+f(x-2))%10007;
}
int main(){
    int n;
    cout<<f(n);
    return 0;
}
