/*3.编写程序计算正方体、圆柱体和球的表面积和体积。
要求抽象出一个公共的基类Body，把它作为抽象类，
在该类中定义求表面积surface_area( ) 和体积 volume( ) 的纯虚函数。
抽象类中定义一个数据成员data，它可以作为球的半径、正方体的边长或圆柱体底面圆的半径。
由这个抽象类派生出描述球Sphere、正方体Cube和圆柱Cylinder的3个具体类，在这3个类中都有计算表面积和体积的函数的具体实现。
要求：设计main函数对上述功能进行测试，计算球、正方体、圆柱的表面积和体积。
其中Sphere, Cube, Cylinder类中surface_area( ) 和volume( )函数	
要求使用基类Body的指针通过赋值兼容规则进行调用。（35 分)*/
const float PI=3.1415926;
#include <iostream>
using namespace std;
class Body{
    protected:
        float data;
    public:
        Body(float data=0);
        virtual float surface_area()=0;
        virtual float Volume()=0;
        void setData(float Data){this->data=Data;}
};
Body::Body(float data){
    this->data=data;
}
class Sphere :public Body{
    public:
        Sphere(float data=0):Body(data){}
        float surface_area(){
            return 4*PI*data*data;
        }
        float Volume(){
            float a=4*PI*data*data*data;
            return a/3.0;
        }
};
class Cube :public Body{
    public:
        Cube(float data=0):Body(data){}
        float surface_area(){
            return 6*data*data*data;
        }
        float Volume(){
            return data*data*data;
        }
};
class Cylinder :public Body{
    private : 
        float height;
    public:
        Cylinder(float data=0,float height=0):Body(data){this->height=height;}
        float surface_area(){
            return 2*PI*data*data+2*PI*data*height;
        }
        float Volume(){
            return data*data*PI*height;
        }
        void setHeight(float height){this->height=height;}
};
int main(){
    Body *p;
    Sphere S(1);
    Cube C(1);
    Cylinder Y(2,3);
    p=&S;
    cout<<p->Volume()<<endl;
    cout<<p->surface_area()<<endl;
    p=&C;
    cout<<p->Volume()<<endl;
    cout<<p->surface_area()<<endl;
    p=&Y;
    cout<<p->Volume()<<endl;
    cout<<p->surface_area()<<endl;

}//21min