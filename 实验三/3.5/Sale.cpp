#include "Sale.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
    Sale::Sale(){buyCount = 0; total=0;}
    void Sale::addBook()	//向购物车中增加书籍
        {   
            static int cnt=-1;
            cout<<"Please enter the name your are looking for:"<<endl;
            string na;
            int qua=0;
            bool flag=0;
            cin>>na;//查询的书籍名称
            cin.ignore();

            for(int i=0;i<999;i++)
			{	
				if(book[i].getName()=="END")break;//找到没有书的地方

                if(book[i].getName()==na)
                {
                    cout<<"The book  "<<na<<"  residue ";
                    cout<<book[i].getQuantity()<<" pieces ."<<endl;
                    cout<<"Please enter the quantity you want to purchase:";

					if(book[i].getQuantity() <=0) 
						cout<<"Sale out!"<<endl;
                    
					while(book[i].getQuantity() > 0)
					{
                        cin>>qua;
                        if(qua<=book[i].getQuantity())
                        {	
							book[i].changeQuantity(qua);
                            buyCount += qua;//忘了这是啥了
                            total+=book[i].getPrice()*qua;
                            BookData boughtBook;//创建一个对象，并把基本信息复制过来，以便放入购物车
							boughtBook.setName(book[i].getName());
							boughtBook.setPrice(book[i].getPrice());
							//boughtBook.setQuantity(book[i].getQuantity());//库存不会对外公布
                            boughtBook.setBought(qua);//更新购买数量
                            buy[++cnt]=boughtBook;//记录到买书的数组里,也就是购物车里
                            //delete &boughtBook;//释放内存
                            break;//If succeed, quit loop
                        }
                        else 
						{
                            cout<<"Stock is insufficient, please reenter purchase quantity! "<<endl;
                            cout<<"The book "<<na<<"residue";
                            cout<<book[i].getQuantity()<<" pieces;";
							cout<<endl;
                            cout<<"Please enter the quantity you want to purchase"<<endl;
                        }
                    }

                    flag=1;
                    cout<<"Add to cart successfully ! "<<endl;
                }
                
            } 
			if(flag==0) cout<<"The book is not in the stack!"<<endl;

				//cout<<"Please select the system function"<<endl;
        }
    void Sale::getBuy() //查看购物车
    {  
        for(int i=0;i<99;i++)
        {
            if(i==0&&buy[i].getName()=="END"){cout<<"The cart is empty"<<endl; break;}
            if(i<99&&buy[i].getName()=="END") {break;}
            cout<<"Book:"<<buy[i].getName()<<endl;
            cout<<"Price:"<<buy[i].getPrice()<<endl;
            cout<<"Quantity:"<<buy[i].getBought()<<endl;
            cout<<"Total:"<<buy[i].getBought()*buy[i].getPrice()<<endl;
            cout<<endl;
        }
        cout<<"Quantity:"<<buyCount<<endl;
        cout<<"Total:"<<total<<endl;
    }
    void Sale::getCash()		//结算
        {
            cout<<"You should pay:"<<total<<endl;
        }
    void Sale::getData()		//打开书库文件并将文件中的图书信息读取到内存中
    {   
        char ss[81];
        cout<<"Please enter the name of bookstack :";
        //cin>>ss;
        fstream bookStack;
        //bookStack.open(ss,ios::in);//读的模式打开文件
		bookStack.open("E:\\1.txt",ios::in);
		if(!bookStack){
            cout<<"ERROR: the bookstack is not exist";
			system("pause");
            exit(0);
        }
        int cnt=-1;

		string name="0";
		double price=0;
		int quan=0;
		if(!bookStack.eof())
		{
			bookStack >> name;
			bookStack >> price;
			bookStack >> quan;//设置库存
		}	
		
	
		while(!bookStack.fail()){
			
			book[++cnt].setName(name);
			book[cnt].setPrice(price);
			book[cnt].setQuantity(quan);
			
			//cout<<cnt<<endl;
			
			bookStack >> name;
			bookStack >> price;
			bookStack >> quan;//设置库存
        }
        bookStack.close();//关闭文件

        cout<<endl<<"Set up bookdata successfully;"<<endl;

    }
    void Sale::putData()		//在实验结束前，将图书信息写入书库文件中
        {   
            string NAME;
            cout<<"Please enter ten name of bookdata";
            cin>>NAME;
            fstream bookStack;
            bookStack.open(NAME,ios::out);//写的模式打开文件
            int cnt=0;
            string temp = 0;
            while (book[cnt].getName()!= temp){
                stringstream ss;
                ss << book[cnt].getName();
                bookStack << ss.str();
                bookStack << book[cnt].getPrice();
                bookStack << book[cnt].getQuantity();
                bookStack << endl;
            }
            bookStack.close();
            cout<<"Save the data successfully;"<<endl;
        }
    void Sale::showData(){
        for(int i=0;i<999;i++)
        {
            if(i==0&&book[i].getName()=="END"){cout<<"The bookstack is empty;"<<endl; break;}
            if(book[i].getName()=="END") {/*cout<<"END"*/;break;}
            stringstream ss;
            ss << book[i].getName();
            cout<<"Book:" << book[i].getName() <<endl;
            cout<<"price:"<<book[i].getPrice()<<endl;
			cout<<"Quantity:"<<book[i].getQuantity()<<endl;
        }
        cout<<endl<<"Show end"<<endl;
    }
	void Sale::setBookStack(){
		char ss[81];
        cout<<"Please enter the name of bookstack you want to create :";
        cin>>ss;
        fstream bookStack;
        bookStack.open(ss,ios::app|ios::ate);//读的模式打开文件
        if(!bookStack){
            cout<<"ERROR: the bookstack is not exist";
			system("pause");
            exit(0);
        }
        int cnt=0;
		char temp='Y';
        while(temp=='Y'){
			string name;
			double price;
			int quan;
			cout<<"Please enter the name of the book:"<<endl;
			cin >> name;
			cout<<"Please enter the price of the book:"<<endl;
            cin >> price;
			cout<<"Please enter the quantaties of the book:"<<endl;
            cin >> quan;//设置库存
			cout << endl;
			BookData book;
			book.setName(name);
			book.setPrice(price);
			book.setQuantity(quan);
			bookStack <<name <<" "<< price<<" " << quan<<" ";
			cout<<"Add successfully!"<<endl;
			cout <<"Do you want to add another ?"<<endl;
			cout <<"Y stand for Yes and N stands for NO"<<endl;
			cin>>temp;
        }
        bookStack.close();//关闭文件
		cout <<endl;
		if (temp=='N'){
			cout<<"Add up the bookdata successfully;";
		}
		cout<<endl;
    }	