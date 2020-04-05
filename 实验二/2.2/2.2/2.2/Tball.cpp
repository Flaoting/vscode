#include "Tpoint.h"
#include "Tball.h"
#include <iostream>
using namespace std;
void Tball::KongJianZuoBiao(){
	cout<<"球心坐标是 ( "<<Center.get_x()<<" , "<<Center.get_y ()<<" , "<<Center.get_z ()<<" )"<<endl;
	cout<<"球的半径是： "<<Radius<<endl;
}
void Tball::Judge(){
	float dx,dy,dz,temp;
	cout<<"请输入坐标，判断是否在球壳上"<<endl;
	cout<<"x=";cin>>dx;
	cout<<"y=";cin>>dy;
	cout<<"z=";cin>>dz;
	temp=(dx-Center.get_x())*(dx-Center.get_x())+(dy-Center.get_y())*(dy-Center.get_y())+(dz-Center.get_z())*(dz-Center.get_z());
	if(((temp-Radius*Radius)<=0.5)&&((temp-Radius*Radius)>=-0.5))
		cout<<"在误差不超0.5的范围内，此点在球面上"<<endl;
	else cout<<"在误差不超0.5的范围内，此点不落在球面上"<<endl;
}