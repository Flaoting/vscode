/*3．编写一个程序，实现人民币RMB类，该类包含三个私有数据成员int y, j, f，
分别表示元、角、分。完成构造函数、拷贝构造函数、赋值函数。
用友元函数实现重载运算符 “+”，完成两个RMB对象矩形相加，加法原则为: 
元和元相加、角和角相加、分和分相加（注意进位）
例如 RMB m1 (10,1,3)、Money m2(2 , 4, 8)，
m1和m2相加后为 m3(12, 6, 1)      编写主函数测试拷贝构造函数和运算符“+”。*/
#include <iostream>
using namespace std;
class RMB{
    private:
        int y,j,f;
    public:
        RMB(int yuan,int jiao,int fen);
        RMB(const RMB & obj);
        void copy( const RMB &obj);
        void simplify();
        void display(){
            cout <<y<<" "<<j<<" "<<f<<endl;
        }
        friend RMB operator +(const RMB a,const RMB b);
};
RMB operator + (const RMB a,const RMB b){
    RMB ans(a.y+b.y,a.j+b.j,a.f+b.f);
    ans.simplify();
    return ans;
}
RMB ::RMB (int yuan,int jiao,int fen){
    y=yuan;
    j=jiao;
    f=fen;
}
RMB::RMB(const RMB &obj){
    y=obj.y;
    j=obj.j;
    f=obj.f;
}
void RMB::copy(const RMB & obj){
    y=obj.y;
    j=obj.j;
    f=obj.f;
}
void RMB::simplify(){
    while(f>=10){
        j+=1;
        f-=10;
    }
    while (j>=10){
        y+=1;
        j-=10;
    }
}
 
int main(){
    RMB r1(1,1,1);
    r1.display();
    RMB r2(r1);
    r2.display();
    RMB r3(0,0,0);
    r3.display();
    r3.copy(r1+r2);
    r3.display();
    return 0;
}