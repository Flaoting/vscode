#pragma once
#include <string>
using namespace std;
class BookData{//某种书的信息
    
    private:
        
        string name;
        double price;
        int quantity_in_stack;//库存数量
        int quantity_bought;//购买数量，只能在购物车里调用

    public:
		BookData(){name="END";};

        string getName(){return name;}
        void setName(string na){name=na;}
        
        double getPrice(){return price;}
        void setPrice(double pr){price = pr;}
        
        int getQuantity(){return quantity_in_stack;}
        void setQuantity(int a){ quantity_in_stack=a;}//直接设置库存
        
		int getBought(){return quantity_bought;}
        void setBought(int a){/*quantity_in_stack-=a;*/ quantity_bought=a;}//购买数量，减掉库存，直接设置购买数
       
		void changeQuantity(int a){quantity_in_stack-=a;}
};