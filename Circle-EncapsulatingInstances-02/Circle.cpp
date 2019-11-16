#include "Circle.h"


// 构造函数，同时接受三个参数：圆的 圆心坐标 X 、 Y 及 半径R
Circle::Circle(double X, double Y, double R)
{
	setXYR(X, Y, R);
}

// 设置圆心的 X 坐标
void Circle::setX(double x)
{
	if (x < 0)
	{
		cout << "对不起，输入的数值有错误！将圆心的 X 坐标置为 0" << endl << endl;
	}

	else
	{
		this->c_X = x;
	}
}

// 设置圆心的 Y 坐标
void Circle::setY(double y)
{
	if (y < 0)
	{
		cout << "对不起，输入的数值有错误！将圆心的 Y 坐标置为 0" << endl << endl;
	}

	else
	{
		this->c_Y = y;
	}
}

// 设置圆的半径 R
void Circle::setR(double r)
{
	if (r < 0)
	{
		cout << "对不起，输入的数值有错误！将圆的半径 R 置为 0" << endl << endl;
	}

	else
	{
		this->c_R = r;
	}
}

// 设置圆的圆心坐标和半径
void Circle::setXYR(double X, double Y, double R)
{
	setX(X);
	setY(Y);
	setR(R);
}

// 获取圆心的 X 坐标
double Circle::getX()
{
	return this->c_X;
}

// 获取圆心的 Y 坐标
double Circle::getY()
{
	return this->c_Y;
}

// 获取圆的半径 R
double Circle::getR()
{
	return this->c_R;
}

// 显示圆的信息：圆心坐标及半径
void Circle::showXYR()
{
	cout << "圆心的 X 坐标为：" << getX() << endl;
	cout << "圆心的 Y 坐标为：" << getY() << endl;
	cout << "圆的半径 R 的值为：" << getR() << endl;
}

// 判断点与圆的关系
void Circle::pointAndCircle(int p_x , int p_y)
{
	double temp_R = (p_x - getX()) + (p_y - getY());
	double R = getR() * getR();
		 
	if (temp_R > R)
	{
		cout << "点在圆外" << endl << endl;
		
	}

	else if (temp_R == R)
	{
		cout << "点在圆上" << endl << endl;
	}

	else
	{
		cout << "点在圆内" << endl << endl;

	}

}

