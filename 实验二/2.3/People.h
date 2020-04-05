#pragma once
class People
{
    private:

        float faHeight,moHeight,forHeight=0;//父母身高和预测身高
        
        char sex,sports,diet;
        
    public:     
        
        People(float fa,float mo,char se,char spor,char die)//构造函数
        {
            faHeight=fa;
            moHeight=mo;
            sex=se;
            sports=spor;
            diet=die;
        }
        void forecastHeight();//预测身高的函数
        float getHeight() {return forHeight;} 
};