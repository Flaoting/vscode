#include <iostream>
#include <string >
#include <string.h>
#include <fstream>
using namespace std;
const int maxn = 100;
int main(){
    fstream in;
    in.open("E:\\Data\\file5.txt",ios::in);
    if (!in){
        cout << "file5.txt can't be opened !"<<endl;
        exit(0);
    }
    int cnt=0;
    string s2[100];
    while (!in.eof()){
        getline(in,s2[cnt++],'\n');
        if (in.eof())break;
    }
    in.close();
    bool kg;
    int ans=0;
    for (int i=0;i<cnt;i++){
        for (int j=0;s2[i][j]!='\0';j++){
            if (j==0){
                if (s2[i][j]=='i'&&s2[i][j+1]=='s'&&s2[i][j+2]==' '){
                ans++;
                j+=1;
            }
            }
            else if (s2[i][j]==' '&&s2[i][j+1]=='i'&&s2[i][j+2]=='s'&&(s2[i][j+3]==' '||s2[i][j+3]=='\0'||s2[i][j+3]=='.'||s2[i][j+3]==',')){
                ans++;
                j+=2;
            }
        }
    }
    cout << ans<<endl;
    return 0;
}