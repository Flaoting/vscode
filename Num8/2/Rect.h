#ifndef RECT_H_
#define RECT_H_
class  Rect {
protected:
 	float width , length, area;//宽度 长度 面积
public:
   	Rect(  ) { width = length = area = 0.0f ; }//无参构造
	Rect ( float w, float l ) {//有参数构造
      		width = w;      length = l;
      		area = width * length;
	}
  	virtual float getArea( )   { return  area;  }//求面积虚函数
   	float getLen( )    { return  length;  }
   	float getWidth( ){ return  width;  }
};
#endif