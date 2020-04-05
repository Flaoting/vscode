#include <iostream>
#include "Tball.h"
#include "Tpoint.h"

//#include "Tball.cpp"
using namespace std;
int main(){
	float dx,dy,dz,r;
	Tpoint P;
	
	cout<<"请输入球心坐标"<<endl;
	cout<<"x=";cin>>dx;cout<<endl;
	cout<<"y=";cin>>dy;cout<<endl;
	cout<<"z=";cin>>dz;cout<<endl;
	cout<<"求半径r=";cin>>r;cout<<endl;
	P.setPoint(dx,dy,dz);
	Tball ball( P ,r) ;
	cout<<"球的表面积 : "<<ball.BiaoMianJi()<<endl;
	cout<<"球的体积 : "<<ball.TiJi()<<endl;
	cout<<"球的空间坐标 " <<endl;
	ball.KongJianZuoBiao();
	ball.Judge();
	system ("pause");
	return 0;
}