#include "Circle.h"


// ���캯����ͬʱ��������������Բ�� Բ������ X �� Y �� �뾶R
Circle::Circle(double X, double Y, double R)
{
	setXYR(X, Y, R);
}

// ����Բ�ĵ� X ����
void Circle::setX(double x)
{
	if (x < 0)
	{
		cout << "�Բ����������ֵ�д��󣡽�Բ�ĵ� X ������Ϊ 0" << endl << endl;
	}

	else
	{
		this->c_X = x;
	}
}

// ����Բ�ĵ� Y ����
void Circle::setY(double y)
{
	if (y < 0)
	{
		cout << "�Բ����������ֵ�д��󣡽�Բ�ĵ� Y ������Ϊ 0" << endl << endl;
	}

	else
	{
		this->c_Y = y;
	}
}

// ����Բ�İ뾶 R
void Circle::setR(double r)
{
	if (r < 0)
	{
		cout << "�Բ����������ֵ�д��󣡽�Բ�İ뾶 R ��Ϊ 0" << endl << endl;
	}

	else
	{
		this->c_R = r;
	}
}

// ����Բ��Բ������Ͱ뾶
void Circle::setXYR(double X, double Y, double R)
{
	setX(X);
	setY(Y);
	setR(R);
}

// ��ȡԲ�ĵ� X ����
double Circle::getX()
{
	return this->c_X;
}

// ��ȡԲ�ĵ� Y ����
double Circle::getY()
{
	return this->c_Y;
}

// ��ȡԲ�İ뾶 R
double Circle::getR()
{
	return this->c_R;
}

// ��ʾԲ����Ϣ��Բ�����꼰�뾶
void Circle::showXYR()
{
	cout << "Բ�ĵ� X ����Ϊ��" << getX() << endl;
	cout << "Բ�ĵ� Y ����Ϊ��" << getY() << endl;
	cout << "Բ�İ뾶 R ��ֵΪ��" << getR() << endl;
}

// �жϵ���Բ�Ĺ�ϵ
void Circle::pointAndCircle(int p_x , int p_y)
{
	double temp_R = (p_x - getX()) + (p_y - getY());
	double R = getR() * getR();
		 
	if (temp_R > R)
	{
		cout << "����Բ��" << endl << endl;
		
	}

	else if (temp_R == R)
	{
		cout << "����Բ��" << endl << endl;
	}

	else
	{
		cout << "����Բ��" << endl << endl;

	}

}

