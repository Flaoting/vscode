#include <iostream>
#include "Tball.h"
#include "Tpoint.h"

//#include "Tball.cpp"
using namespace std;
int main(){
	float dx,dy,dz,r;
	Tpoint P;
	
	cout<<"��������������"<<endl;
	cout<<"x=";cin>>dx;cout<<endl;
	cout<<"y=";cin>>dy;cout<<endl;
	cout<<"z=";cin>>dz;cout<<endl;
	cout<<"��뾶r=";cin>>r;cout<<endl;
	P.setPoint(dx,dy,dz);
	Tball ball( P ,r) ;
	cout<<"��ı���� : "<<ball.BiaoMianJi()<<endl;
	cout<<"������ : "<<ball.TiJi()<<endl;
	cout<<"��Ŀռ����� " <<endl;
	ball.KongJianZuoBiao();
	ball.Judge();
	system ("pause");
	return 0;
}