/*5. 已有如下一个基类：
;要求：
(1)建立两个派生类IntVariable和StringVariable。其中，IntVariable类有一个私有成员int val存储整型变量, 
StringVariable有一个私有成员char* ptr存储字符串。
 完成类IntVariable和StringVariable的构造函数、拷贝构造函数、析构函数。
(2)完成类IntVariable和StringVariable的函数Calculate()，返回变量占据的字节数。
(3) 写出主函数程序，分别创建一个值为10的IntVariable对象和“HelloNUAA”的StringVariable对象，
并通过使用基类指针调用虚函数（即运行时的多态性）输出变量占据的字节数。*/
class Variable { 
		int size; 	//变量占据的字节数
	public:
		Variable (int s) :size(s){} 
		Variable (const Variable& in):size(in.size){} 
		virtual int Calculate () = 0;
		int GetSize(){return size;}
};
#include <iostream>
#include <string.h>
using namespace std;
class IntVariable:public Variable{
    private:
        int val;
    public:
    IntVariable(int size,int va):Variable(size),val(va){}
    IntVariable(IntVariable &);
    ~IntVariable();
    int Calculate ();

};
IntVariable::IntVariable(IntVariable& obj):Variable(obj.GetSize()){
    val=obj.val;
}
IntVariable::~IntVariable(){}
int IntVariable::Calculate(){
    return sizeof(int);
}
class StringVariable:public Variable{
    private:
        char *ptr;
    public:
        StringVariable(int size,char *a);
        StringVariable(StringVariable&);
        ~StringVariable();
        int Calculate ();
};
StringVariable::StringVariable(int size,char *a):Variable(size){
    ptr=new char [size+1];
    strcpy(ptr,a);
}
StringVariable::StringVariable(StringVariable &a):Variable(a.GetSize()){
    ptr=new char [a.GetSize()];
    strcpy(ptr,a.ptr);
}
StringVariable::~StringVariable(){
    delete [] ptr;
}
int StringVariable::Calculate(){
    return this->GetSize()+1;
}
int main(){
    Variable *p;
    char s[12]="HelloNUAA";
    StringVariable a(10,s);
    int df=13423;
    IntVariable b(4,df);
    p=&a;
    cout<<a.Calculate()<<endl;
    p=&b;
    cout<<a.Calculate()<<endl;
    return 0;
}


