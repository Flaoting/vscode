#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("1.txt",ios::in);
    if(!file){
        cout <<"文件打开失败！！"<<endl;
        exit(0);
    }
    char cc;
    int cnt=0;
    while(!file.eof())
    {
        file.get(cc);
        if(cc==10) cnt++;
    }
    file.close();
    cout<< cnt ;
    return 0;
}