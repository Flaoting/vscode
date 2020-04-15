#ifndef TEACHER_H_
#define TEACHER_H_
#include "Subject.h"
#include "People.h"
class Teacher :public People{
    private:
        Subject subject;
        
    public:
        Teacher();
};
#endif