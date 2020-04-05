#include <cmath>
#include <iostream>
#include <string.h>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    priority_queue<int,vector<int>,std::greater<int> > q;
    int people[N+10],wind[M+10];
    memset(wind,0,sizeof(wind));
    for(int i=1;i<=N;i++) cin>>people[i];
    for(int i=1;i<=M;i++) q.push(wind[i]);
    int k;
    for(int i=1;i<=N;i++){
        k=q.top();
        q.pop();
        k+=people[i];
        q.push(k);
    }
    int ans=q.top();
    cout<<ans;
    return 0;
}