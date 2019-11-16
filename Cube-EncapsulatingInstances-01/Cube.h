#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Cube
{
private:
	// 立方体的长
	double Long = 0;

	// 立方体的宽
	double Wide = 0;
	
	// 立方体的高
	double High = 0;


public:
	// 构造函数，传立方体的长 、 宽 、 高
	Cube(double l , double w , double h);	

	// 设置立方体的长
	void setLong(double l);

	// 设置立方体的宽
	void setWide(double w);

	// 设置立方体的高 
	void setHigh(double h);

	// 设置立方体的长宽高
	void setLWH(double l, double w, double h);

	// 获取立方体的长
	double getLong();

	// 获取立方体的宽
	double getWide();

	// 获取立方体的高
	double getHigh();

	// 获取立方体的体积
	double getVolume();

	// 获取立方体的面积
	double getArea();

	// 输出立方体长宽高
	void showLWH();

	// 输出立方体体积
	void showVolume();
	
	// 输出立方体面积
	void showArea();


};