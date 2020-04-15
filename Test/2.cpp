
#include <iostream>
using namespace std;

class B0{
	public:
		virtual void display()=0;
};

class B1:public B0{
	public:
		void display(){
			cout<<"B1::display()"<<endl;
		}
};
class D1:public B1{
	public:
		void display(){
			cout<<"D1::display()"<<endl;
		}
};
void fun(B0 *ptr){
	ptr->display();
}
int  main(){
	B0 *p;
	B1 b1;
	D1 d1;
	p=&b1;
	fun(p);
	p=&d1;
	fun(p);
    return 0;
}

