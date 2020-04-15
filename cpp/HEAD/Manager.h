#ifndef MANAGER_H_
#define MANAGER_H_
#include "People.h"
class Manager : public People{
    protected:
        char password[30];
};
#endif