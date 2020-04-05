#include "People.h"
#include <string>
#include <string.h>
using namespace std;
People::People(char *nam,char se,char *phon,char *I,char *schoo){
    strcpy(name,nam);
    sex=se;
    strcpy(phone,phon);
    strcpy(ID,I);
    strcpy(school,schoo);
}