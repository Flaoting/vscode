/*定义一个课程类
包含课程名和该课程的学分
编写课程类的构造函数
编写课程类的拷贝构造函数
定义课程对象，测试构造函数和拷贝构造函数*/
#pragma once
#include "Student.h"
#include <string>
class Subject{
    private :
        string name;
        double score;
    public:
        Subject(string nam="000",double scor=0.00){ name = nam;score=scor;}
        Subject(Subject &obj){ name=obj.name; score=obj.score;}
        void setName(string na){string name=na;}
        string getName(){return name;}
        void setScore(double sco){ score=sco;}
        double getScore(){return score;}
        void showSubject();
};
