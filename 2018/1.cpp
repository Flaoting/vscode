/*1.请编写程序：①从文本文件“File.txt”中读入数据，
将其中的小写字母全部转换为大写；
并保存到文本文件“TextFile.txt”中。
②把转换后的文件内容读出显示在屏幕上；
③统计文件TextFile.txt中单词“THE”出现的次数，
并显示出来。（35 分)*/
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;
int main(){
    ifstream file;
    file.open("File.txt",ios::in);
    if(!file){
        cout <<"File.txt can't be opened!"<<endl;
        exit(0);
    }
    char  temp[102],str[100][102];
    int i=1;
    while(file.getline(temp,100,10)){
        strcpy(str[i],temp);
        i++;
    }
    file.close();
    int mmm='a'-'A';
    for (int j=1;j<=i;j++){
        for (int k=0;k<100;k++){
            if(str[j][k]=='/0') break;
            if(str[j][k]>='a'&&str[j][k]<='z')
                str[j][k]-=mmm;
        }
    }
    ofstream f;
    f.open("TextFile.txt",ios::out);
    if(!f){
        cout <<"TextFile.txt can't be opened!"<<endl;
        exit(0);
    }
    int p=1;
    while(p<=i){
        f<<str[p];
        f<<endl;
        cout<<str[p]<<endl;
        p++;
    }
    f.close();
    file.open("TextFile.txt",ios::in);
    if(!file){
        cout <<"TextFile.txt can't be opened!"<<endl;
        exit(0);
    }
    string s;
    int ans=0;
    file>>s;
    while(!file.eof()){
        if(s=="THE") {
            ans++;
        }
        file>>s;
    }
    
    cout <<ans<<endl;
    return 0;
}
/*第一种： 在<istream>中的getline()函数有两种重载形式：

istream& getline (char* s, streamsize n );
istream& getline (char* s, streamsize n, char delim );

作用是： 从istream中读取至多n个字符(包含结束标记符)保存在s对应的数组中。即使还没读够n个字符，

如果遇到delim或 字数达到限制，则读取终止，delim都不会被保存进s对应的数组中。*/