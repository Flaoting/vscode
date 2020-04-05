#include <iostream>
using namespace std;
int main(){
    int n,d;//输入总天数，总保存时间
    cin>>n>>d;
    int p[n+10];
    for(int i=1;i<=n;i++) cin>>p[i];
    int store=0;
    int  sum=0;
    bool flag;
    for(int i=1;i<=n;i++){
        store=1;//store代表这天要买的可乐数量
        flag=0;
        if(p[i]<p[i+1]&&i<n&&d>1){//如果明天比今天贵 而且 今天不是最后一天 而且储存天数大于1 也就是今天买的明天能喝
            store++;//把明天的买出来
            while((i+store)<=n&&p[i]<p[i+store]){
                if(store<d){
                    flag=1;
                    break;
                }
                store++;//再买一瓶
            }
                
        }
        
        sum+=store*p[i];//算账
        i+=(store-1);//
    }
    cout <<sum;
    return 0;
}