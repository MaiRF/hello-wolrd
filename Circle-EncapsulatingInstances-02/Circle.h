#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Circle
{

private:
	// 圆心 X 坐标
	double c_X = 0;
	
	// 圆心 Y 坐标
	double c_Y = 0;

	// 圆的半径
	double c_R = 0;


public:
	// 构造函数，同时接受三个参数：圆的 圆心坐标 X 、 Y 及 半径R
	Circle(double X, double Y, double R);

	// 设置圆心的 X 坐标
	void setX(double x);
		
	// 设置圆心的 Y 坐标
	void setY(double y);

	// 设置圆的半径 R
	void setR(double r);

	// 设置圆的圆心坐标和半径
	void setXYR(double X, double Y, double R);

	// 获取圆心的 X 坐标
	double getX();

	// 获取圆心的 Y 坐标
	double getY();

	// 获取圆的半径 R
	double getR();

	// 显示圆的信息：圆心坐标及半径
	void showXYR();

	// 判断点与圆的关系
	void pointAndCircle(int p_x, int p_y);


};