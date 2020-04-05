#include <iostream>
using namespace std;
class  Num{
	int  a;  
public : 
	Num(int i):a(i){}
	void Inc(int& in){ in +=a;}
	Num& operator++()
	{
		a++;
		return *this;
	}
    int GetVal(){return a;}
} ;  
int main() {
Num n(2);
int b = 5;
n.Inc(b); 
cout<<b<<endl;
++n;
n.Inc(b);
cout<<b<<endl;
cout<<n.GetVal()<<endl;
}
