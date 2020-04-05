#pragma once
#include "BookData.h"
class Sale
{
private:
    int buyCount;		//购买书的数量
    double total;		//总价
    BookData book[1000],buy[100]; //book数组用于存储图书信息，buy数组用于存储客户购买的图书的信息
public:
    Sale();		//构造函数
    void addBook();		//向购物车中增加书籍
    void getBuy();		//查看购物车
    void getCash();		//结算
    void getData();		//打开书库文件并将文件中的图书信息读取到内存中
    void putData();		//在实验结束前，将图书信息写入书库文件中
    void showData();
	void setBookStack();
};