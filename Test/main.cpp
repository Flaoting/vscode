//�����⣺
//1.��������������ȰѶ���p��person p("oldold","12345",20)��д��������ļ�xinxi.dat�У�
//Ȼ�������p���¸�ֵ��p.setinformation ("newnew","1111",88)����
//��Ȼ�󣬴�xinxi.dat�ж�ȡ��Ϣ��p�У������p�е����ݣ�����age��20����name��ID�ֱ���"newnew","1111"��
//�����������ô���£�Ϊʲô����������ν����

//2.���ϣ�������⣬��������һ������q,��p������д��xinxi.dat�����Ǵ�xinxi.dat�ж����������ݷ���q�У�
//���������������û�����⣬����ԭ����ڣ���ν����

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
	person()		//���캯��
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
	~person(){delete []name;delete []id;}	//��������
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
		cout<<"��ʧ��!\n";
		exit(0);
	}
	file.write((char *)&p,sizeof(p));
	file.close();
	//�ر��ļ�

	p.setinformation ("newnew","1111",88);
	cout<<endl<<p.getname() <<endl<<p.getid ()<<endl<<p.getage()<<endl ;
	
	person q;
	file.open("xinxi.dat",ios::in|ios::binary);
	if(!file)
	{
		cout<<"��ʧ��!\n";
		exit(0);
	}

	file.read((char *)&q,sizeof(q));
	cout<<"��Ϣ��"<<q.getname () <<endl<<q.getid ()<<endl<<q.getage () <<endl;
	file.close();

	//���ļ�
	file.open("xinxi.dat",ios::in|ios::binary);
	if(!file)
	{
		cout<<"��ʧ��!\n";
		exit(0);
	}

	file.read((char *)&p,sizeof(p));
	cout<<"��Ϣ��"<<p.getname () <<endl<<p.getid ()<<endl<<p.getage () <<endl;
	file.close();
	
	return 0;
}