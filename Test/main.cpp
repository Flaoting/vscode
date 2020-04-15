//讨论题：
//1.请分析主函数中先把对象p（person p("oldold","12345",20)）写入二进制文件xinxi.dat中，
//然后给对象p重新赋值（p.setinformation ("newnew","1111",88)）。
//再然后，从xinxi.dat中读取信息到p中，并输出p中的内容，发现age是20，但name，ID分别是"newnew","1111"；
//请分析这是怎么回事，为什么会这样，如何解决？

//2.承上，如果另外，引入另外一个对象q,把p的内容写入xinxi.dat，但是从xinxi.dat中读出来的数据放入q中，
//并输出，请试验有没有问题，问题原因何在，如何解决？

#include<iostream>
#include<fstream>
using namespace std;
#include<stdlib.h>
#include<string.h>

class person
{
private:
	char *name;
	char *id;
	int age;
public:
	person()		//构造函数
	{
		name=new char[21];
		id=new char[21];
		age=0;
	
	}
	person(char *na,char *i,int a)
	{
		name=new char[strlen(na)+1];
		strcpy(name,na);
		id= new char[strlen(i)+1];
		strcpy(id,i);
		age=a;
	}
	~person(){delete []name;delete []id;}	//析构函数
	void setinformation(char *n,char *i,int a)
	{
		strcpy(name,n);
		strcpy(id,i);
		age=a;
	}
	char * getname(){return name;}
	char * getid(){return id;}
	int getage(){return age;}
};


int main()
{
	fstream file;
	person p("oldold","12345",20);
	cout<<p.getname() <<endl<<p.getid ()<<endl<<p.getage()<<endl ;
	file.open ("xinxi.dat",ios::out|ios::binary);
	if(!file)
	{
		cout<<"打开失败!\n";
		exit(0);
	}
	file.write((char *)&p,sizeof(p));
	file.close();
	//关闭文件

	p.setinformation ("newnew","1111",88);
	cout<<endl<<p.getname() <<endl<<p.getid ()<<endl<<p.getage()<<endl ;
	
	person q;
	file.open("xinxi.dat",ios::in|ios::binary);
	if(!file)
	{
		cout<<"打开失败!\n";
		exit(0);
	}

	file.read((char *)&q,sizeof(q));
	cout<<"信息："<<q.getname () <<endl<<q.getid ()<<endl<<q.getage () <<endl;
	file.close();

	//打开文件
	file.open("xinxi.dat",ios::in|ios::binary);
	if(!file)
	{
		cout<<"打开失败!\n";
		exit(0);
	}

	file.read((char *)&p,sizeof(p));
	cout<<"信息："<<p.getname () <<endl<<p.getid ()<<endl<<p.getage () <<endl;
	file.close();
	
	return 0;
}