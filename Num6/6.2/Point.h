/*已知类Point定义如下：
	class  Point{
float x, y;
public : 
         // 其它成员函数，根据需要填写, 如构造函数、拷贝构造函数
	};
任务： 完成Point类的①== 、②!=、③>、④<< 运算符重载， 给定两个Point对象p1和p2,
①p1 == p2，即p1.x == p2.x 并且p1.y == p2.y;
②p1 != p2，即 p1.x != p2.x 或者p1.y != p2.y
③p1 > p2，即 p1.x > p2.x或者 p1.x == p2.x 并且p1.y > p2.y
④可以用cout<<输出一个Point对象
*/
#ifndef POINT_H_
#define POINT_H_
#include <iostream>
using namespace std;
class Point {
    private:
        float x,y;
    public:
        Point (float x=0,float y=0){
            this->x=x;
            this->y=y;
        }
    bool operator == (const Point &obj);
    bool operator != (const Point &obj);
    bool operator >  (const Point &obj);
    friend ostream &operator <<(ostream &,Point &);
};
#endif