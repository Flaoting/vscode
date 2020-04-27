/*1. 写一个程序依次读入文本文件1.txt中的每一行，将偶数行内容添  
加行号后写到另一个文件2.txt中。*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream infile;
    infile.open("1.txt",ios::in);
    if(!infile){
        cout<<"1.txt can't be opened!"<<endl;
        exit(0);
    }
    char str[100][100];
    int t=1;
    while(!infile.eof()){
        infile.getline(str[t],81,10);
        t++;
    }
    infile.close();
    ofstream outfile("2.txt",ios::out);
    for(int i=1;i<=t;i++){
        if(i%2!=0) continue;
        outfile<<i;
        outfile.put('.');
        for (int j=0;;j++){
            if(str[i][j]=='\0') break;
            outfile.put(str[i][j]);
        }
        outfile.put(10);
    }
    outfile.close();
    return 0;
}