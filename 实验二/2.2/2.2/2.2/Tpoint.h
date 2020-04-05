#pragma once
class Tpoint{
	private :
		float X,Y,Z;
	public :
		Tpoint (float x=0,float y=0,float z=0){X=x,Y=y,Z=z;}
		void setPoint(float xx,float yy,float zz){X=xx,Y=yy,Z=zz;}
		float get_x(){return X;}
		float get_y(){return Y;}
		float get_z(){return Z;}
};