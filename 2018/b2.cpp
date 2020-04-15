/*2. 实现字符数组类存储一组字符变量，
请编写类中未完成的成员函数，
并编写主函数测试如下成员函数：拷贝构造函数、Set、Get。
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class CharArray{
	char* data_list;	//指针
	int len; 			//数组长度
public:
	CharArray (int size);//构造函数，输入数组大小
	CharArray (CharArray& in);//拷贝构造函数
	~ CharArray ();//析构函数
	void Set(int pos, char val);//在pos位置放入val
	char Get(int pos); //返回位于pos位置的元素
	int Size(){return len;} //返回数组大小
};
CharArray::CharArray(int size){
    this->len=size;
    data_list=new char [size+1];
}
CharArray::CharArray(CharArray& in){
    data_list=new char [strlen(in.data_list)+1];
    strcpy(data_list,in.data_list);
    this->len=in.len;
}
CharArray::~CharArray(){
    delete [] data_list;
}
char CharArray::Get(int pos){
    return data_list[pos-1];
}
void CharArray::Set(int pos,char val){
    data_list[pos-1]=val;
}
int main(){
    CharArray s(10);
    s.Set(1,'a');
    s.Set(2,'b');
    cout<<s.Get(1)<<s.Get(2)<<endl;
    CharArray b(s);
    cout<<b.Get(1)<<b.Get(2)<<endl;
}