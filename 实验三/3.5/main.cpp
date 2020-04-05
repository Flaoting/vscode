/*5.假设有一书店的前台收银销售类如下定义：
Class Sale :		//前台销售类
{
private:
    int buycount;		//购买书的数量
    double total;		//总价
    BookData book[1000],buy[100]; //book数组用于存储图书信息，buy数组用于存储客户购买的图书的信息
public:
    Sale();		//构造函数
    void addBook();		//向购物车中增加书籍
    void getBuy();		//查看购物车
    void getCash();		//结算
    void getData();		//打开书库文件并将文件中的图书信息读取到内存中
    void putData();		//在实验结束前，将图书信息写入书库文件中
};
请完成该类定义，实验并且要满足：
1）向购物车中添加书籍：用户先输入书名查找要购买的书籍，系统会查找相关书籍并询问购买数量，用户输入数量后即可添加至购物车
2）查看购物车:系统显示用户购物车中的书籍以及价格、数量等信息
3）结算：系统计算出用户需要支付的价格*/
#include <iostream>
#include "Sale.h"
using namespace std;
int main(){
    Sale S;
    S.getData();//默认自动导入
    int tem=0;
	int cnt=0;
    while(tem!=6){
		++cnt;
		if(cnt>200) { cout<<"Please start again !"; break;}
        cout<<"Please check your need:"<<endl;
		//cout<<"0.Import bookstack."<<endl;
        cout<<"1.Check the stack."<<endl;
        cout<<"2.Add book to cart."<<endl;
        cout<<"3.Check my cart."<<endl;
        cout<<"4.Settle Accounts."<<endl;
		cout<<"5.Add bookstack."<<endl;
        cout<<"6.Quit system;"<<endl;
        cin>>tem;
        if(tem==1) S.showData();
        else if(tem==2) S.addBook();
        else if(tem==3) S.getBuy();
		else if(tem==4) {S.getCash(); system("pause");}
		else if(tem==5) S.setBookStack();
		//else if(tem==0) S.getData();//导入数据
        else if(tem==6) 
		{
            cout<<endl<<"Thank you very much ";
			system("pause");
            break;
        }
		else 
		{
			cout<<endl<<"Your input is invalid !";
			cout<<endl<<"Please check again !";
			cin>>tem;
		}
    }
    system ("pause");
    return 0;
}