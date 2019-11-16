#include "Cube.h"

// 构造函数，传立方体的长 、 宽 、 高
Cube::Cube(double l, double w, double h)
{
	setLong(l);
	setWide(w);
	setHigh(h);

}

// 设置立方体的长
void Cube::setLong(double l)
{
	if (l < 0)
	{
		cout << "对不起，输入错误！将立方体的长置为0！" << endl << endl;
		this->Long = 0;
	}

	else
	{
		this->Long = l;
		cout << "已将立方体的长的值设为：" << this->Long << endl << endl;
	}
}

// 设置立方体的宽 
void Cube::setWide(double w)
{
	if (w < 0)
	{
		cout << "对不起，输入错误！将立方体的宽值置为0！" << endl << endl;
		this->Wide = 0;
	}

	else
	{
		this->Wide = w;
		cout << "已将立方体的宽的值设为：" << this->Wide << endl << endl;
	}
}

// 设置立方体的高 
void Cube::setHigh(double h)
{
	if (h < 0)
	{
		cout << "对不起，输入错误！将立方体的高值置为0！" << endl << endl;
		this->High = 0;
	}

	else
	{
		this->High = h;
		cout << "已将立方体的宽的值设为：" << this->High << endl << endl;
	}
}

// 设置立方体的长宽高
void Cube::setLWH(double l, double w, double h)
{
	setLong(l);
	setWide(w);
	setHigh(h);
}

// 获取立方体的长
double Cube::getLong()
{
	return this->Long;
}

// 获取立方体的宽
double Cube::getWide()
{
	return this->Wide;
}

// 获取立方体的高
double Cube::getHigh()
{
	return this->High;
}

// 获取立方体的体积
double Cube::getVolume()
{
	return (this->Long * this->Wide * this->High);
}

// 获取立方体的面积
double Cube::getArea()
{
	return (this->Long * this->Wide * 6);
}

// 输出立方体长宽高
void Cube::showLWH()
{
	cout << "长方体的长为：" << getLong() << endl;
	cout << "长方体的宽为：" << getWide() << endl;
	cout << "长方体的高为：" << getHigh() << endl;
}

// 输出立方体体积
void Cube::showVolume()
{
	cout << "长方体的体积为：" << getVolume() << endl;
}

// 输出立方体面积
void Cube::showArea()
{
	cout << "长方体的面积为：" << getArea() << endl;
}


