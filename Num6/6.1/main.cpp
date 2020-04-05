#include <iostream>
#include "Complex.h"
using namespace std;
int main(){
    Complex c1(1,2);
    Complex c2(5,6);
    c1.showComplex();
    c2.showComplex();
    Complex c3;
    Complex c4;
    c3.showComplex();
    c4.showComplex();
    c3=c1+c2;
    c4=c2-c1;
    c3.showComplex();
    c4.showComplex();
    return 0;
}