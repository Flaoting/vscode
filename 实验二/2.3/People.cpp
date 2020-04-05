/*设faHeight为其父身高，moHeight为其母身高
男性成人时身高=(faHeight + moHeight)×0.54 
女性成人时身高=(faHeight×0.923 + moHeight)/2 
如果喜爱体育锻炼，那么可增加身高2%；
如果有良好的卫生饮食习惯，那么可增加身高1.5%。
编程从键盘输入用户的性别（用字符型变量sex存储，输入字符F表示女性，输入字符M表示男性）
、父母身高（用实型变量存储，faHeight为其父身高，moHeight为其母身高）、
是否喜爱体育锻炼（用字符型变量sports存储，输入字符Y表示喜爱，输入字符N表示不喜爱）、
是否有良好的饮食习惯等条件（用字符型变量diet存储，输入字符Y表示良好，输入字符N表示不好），
利用给定公式和身高预测方法对身高进行预测。
编程要求：有用户输入输出提示信息。*/
#include "People.h"
#include <iostream>
using namespace std;
        void People::forecastHeight(){
            if(sex=='F')
                forHeight = (faHeight*0.923+moHeight)/2;
            else if(sex=='M')
                forHeight = (faHeight+moHeight)*0.54;
            else {
                cout <<"你的性别有点奇怪哦！";
                system("pause");
            }
            if(sports == 'Y') forHeight*=1.02;
            if(diet == 'Y') forHeight*=1.015;
        }