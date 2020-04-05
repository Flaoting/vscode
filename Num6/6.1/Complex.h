#ifndef COM_H_
#define COM_H_
#include <iostream>
using namespace std;
class Complex{
    private:
        double real,image;
    public:
        Complex(double real=0,double image=0){this->real=real;this->image=image;}
        void showComplex(){
            cout << real << "+"<<image<<"i"<<endl;
        }
        double getreal(){return real;}
        double getimage(){return image;}
        Complex operator + (Complex &obj){Complex temp(real+obj.real,image+obj.image);return temp;}
        Complex operator - (Complex &obj){Complex temp(real-obj.real,image-obj.image);return temp;}
};
#endif
