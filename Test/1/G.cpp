#include <iostream>
#include <ctime>
#include <string.h>
#include <string>
using namespace std;
long long  standard_to_stamp(char *str_time)  
{  	struct tm stm;  	int iY, iM, iD, iH, iMin, iS;
   	memset(&stm,0,sizeof(stm));
        iY = atoi(str_time);
      	iM = atoi(str_time+5);  	
        iD = atoi(str_time+8);
        iH = atoi(str_time+11);  	
        iMin = atoi(str_time+14);  	
        iS = atoi(str_time+17);   	
        stm.tm_year=iY-1900;  	
        stm.tm_mon=iM-1;  	
        stm.tm_mday=iD;  	
        stm.tm_hour=iH;  	
        stm.tm_min=iMin;  	
        stm.tm_sec=iS;   	
        //printf("%d-%0d-%0d %0d:%0d:%0d\n", iY, iM, iD, iH, iMin, iS);   //标准时间格式例如：2016:08:02 12:12:30	
        return (long long )mktime(&stm);
}   
void read(char *,char *);
int main(){
        char standard1[100];
        char standard2[100];
        read(standard1,standard2);
        long long  stampTime1 = standard_to_stamp(standard1);	
        long long  stampTime2 = standard_to_stamp(standard2);
        //cout << stampTime1 << endl;
        //cout << stampTime2 << endl;
        //cout<<standard1<<endl<<standard2<<endl;
        long long  ans;
        ans=(stampTime2-stampTime1);
        ans*=1000;
        cout<<ans;
        return 0;
}
void read(char *s1,char *s2){
    scanf("%s",s1);
    scanf("%s",s1+11);
    s1[10]=' ';
    s1[4]=':';
    s1[7]=':';
    scanf ("%s",s2);
    scanf("%s",s2+11);
    s2[4]=':';
    s2[7]=':';
    s2[10]=' ';
}