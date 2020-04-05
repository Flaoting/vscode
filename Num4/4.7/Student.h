#ifndef STD_H_
#define STD_H_
class Student
{
private:
    double score;
    static double total_score;
    static int count;
public:
    Student(){score=-1;}
    void account(double score)
    {
        this->score=score;
        total_score+=score;
        count++;
    }
    static double sum(){
        return total_score;
    }
    static double average(){return total_score/count;}
};
double Student:: total_score=0;
int Student:: count=0;
#endif

	