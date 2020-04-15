/*2.设有一个字符串类MyString的定义如下：
	
    请编写类中各成员函数和重载运算符的实现代码，并编写主函数进行测试。（30 分)
*/
#include <cstring>
#include <string.h>
#include <iostream>
using namespace std;
class MyString{

public:
	MyString();
	MyString(const char * ch);
	MyString(const MyString& str);
	~MyString();
	int sizeString();			//字符串大小
	char * c_str();				//访问字符串 （获取当前字符串）
	bool operator == (const MyString& str);		//两个字符串相等比较
	MyString operator+ (const MyString& str);		//链接字符串。把两个字符串连接起来//成一个新字符串
    MyString operator= (const MyString& str);
    void display();
private:
	int size;			//字符串大小
	char * sstring;		//字符串
};
MyString::MyString(){
    size=1;
    sstring = new char [1];
    sstring[0]='\0'; 
}
MyString::MyString(const char * ch){
    size=strlen(ch);
    sstring = new char [size+1];
    strcpy(sstring,ch);
}
MyString::MyString(const MyString& str){
    size=str.size;
    sstring = new char [size+1];
    strcpy(sstring,str.sstring);
}
MyString::~MyString(){
    delete [] sstring;
    cout<<"~"<<endl;
    this->display();
}
int MyString:: sizeString(){
    return size;
}			
char * MyString::c_str(){
    return sstring;
}
bool MyString::operator == (const MyString& str){
    if(this->size!=str.size) return 0;
    for (int i=0;i<size;i++){
        if(sstring[i]!=str.sstring[i])
            return 0;
    }
    return 1;
}
MyString MyString::operator+ (const MyString& str){
    char tem[255];
    strcpy(tem,sstring);
    delete [] sstring;
    int a=size+str.size+1;
    sstring =new char [a];
    strcpy(sstring,tem);
    char *p=sstring+size;
    int i=0;
    while(str.sstring[i]!='\0')
    {
        *p=str.sstring[i];
        p++;
        i++;
    }
    *p='\0';
    return *this;
}
MyString MyString::operator= (const MyString& str){
    char tem[255];
    delete [] sstring;
    int a=str.size+1;
    sstring =new char [a];
    strcpy(sstring,str.sstring);
    size=str.size;
}
void MyString::display(){
    printf("%d\n",this->c_str());
    cout <<size<<endl;
}
int main(){
    MyString s1;
    printf("%s\n",s1.c_str());
    char a[100]="abc";
    char b[100]="edf";
    MyString s2(a);
    //printf("%s\n",s2.c_str());
    MyString s3(b);
    //printf("%s\n",s3.c_str());
    //cout <<s3.sizeString()<<endl;
    //if(s1==s3)cout <<"YES"<<endl;
    s1=s2+s3;//这里会调用两次析构函数
    printf("%s\n",s2.c_str());
    printf("%s\n",s1.c_str());
    return 0;
    
}