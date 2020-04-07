#ifndef Cube_H_
#define Cube_H_
#include "Rect.h"
class Cube : public Rect{
    private:
        float height;
    public:
        float getArea();
        Cube (float w,float l,float h);
        Cube();
    	float getLen( )    { return  length;  }
   	    float getWidth( ){ return  width;  }
        float getHeight( ){ return  height;  }
};
float Cube ::getArea(){
    float a=width*length;
    float b=width*height;
    float c=length*height;
    area=2*(a+b+c);
    Rect ::getArea();
}
Cube::Cube (float w,float l,float h):Rect(w,l){
    height=h;
}
Cube :: Cube():Rect(){
    height=0.0f;
}
#endif