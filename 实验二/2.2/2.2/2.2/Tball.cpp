#include "Tpoint.h"
#include "Tball.h"
#include <iostream>
using namespace std;
void Tball::KongJianZuoBiao(){
	cout<<"���������� ( "<<Center.get_x()<<" , "<<Center.get_y ()<<" , "<<Center.get_z ()<<" )"<<endl;
	cout<<"��İ뾶�ǣ� "<<Radius<<endl;
}
void Tball::Judge(){
	float dx,dy,dz,temp;
	cout<<"���������꣬�ж��Ƿ��������"<<endl;
	cout<<"x=";cin>>dx;
	cout<<"y=";cin>>dy;
	cout<<"z=";cin>>dz;
	temp=(dx-Center.get_x())*(dx-Center.get_x())+(dy-Center.get_y())*(dy-Center.get_y())+(dz-Center.get_z())*(dz-Center.get_z());
	if(((temp-Radius*Radius)<=0.5)&&((temp-Radius*Radius)>=-0.5))
		cout<<"������0.5�ķ�Χ�ڣ��˵���������"<<endl;
	else cout<<"������0.5�ķ�Χ�ڣ��˵㲻����������"<<endl;
}