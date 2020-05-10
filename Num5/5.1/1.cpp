#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
using namespace std;
const int maxn=100;
int main(){
    fstream in;
    in.open("E:\\Data\\file1.txt",ios::in);
    if (!in){
        cout << "file1.txt can't be opened !"<<endl;
        exit (0);
    }
    int cnt=0;
    char s1[100],s2[maxn][100];
    while (!in.eof()){
        in.getline(s1,81,'\n');
        for(int i=0;s1[i]!='\0';i++) {
            if (s1[i]<='z'&&s1[i]>='a')
                s1[i]-=32;
        }
        strcpy(s2[cnt++],s1);
    }
    in.close();
    fstream out ;
    out.open("E:\\Data\\file2.txt",ios::out);
    int cnt1=0;
    while (cnt1<cnt){
        out<<s2[cnt1]<<endl;
        cnt1++;
    }
    out.close();
    return 0;
}