#pragma once
#include "Tpoint.h"
using namespace std;
const double PI = 3.1415926;
/*用 C++ 语言定义一个三维空间的坐标点 Tpoint；
并描述三维空间的球 TBall ，实现其主要操作（如计算体积和表面积，输出空间坐标等）。
要求：代码分开编写在不同的文件中，以便掌握多文件联编。*/
 class Tball{
	private : 
		Tpoint Center;//定义球心点
		float Radius;//定义球的半径
	public:
		Tball(Tpoint c ,float r){ Center = c;Radius=r;}//构造函数
		double TiJi(){ return 4.0/3.0*PI*Radius*Radius*Radius;}
		double BiaoMianJi(){ return 4*PI*Radius*Radius;}
		void KongJianZuoBiao();
		void Judge();
};