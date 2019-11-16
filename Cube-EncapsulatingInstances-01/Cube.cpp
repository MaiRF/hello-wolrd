#include "Cube.h"

// ���캯������������ĳ� �� �� �� ��
Cube::Cube(double l, double w, double h)
{
	setLong(l);
	setWide(w);
	setHigh(h);

}

// ����������ĳ�
void Cube::setLong(double l)
{
	if (l < 0)
	{
		cout << "�Բ���������󣡽�������ĳ���Ϊ0��" << endl << endl;
		this->Long = 0;
	}

	else
	{
		this->Long = l;
		cout << "�ѽ�������ĳ���ֵ��Ϊ��" << this->Long << endl << endl;
	}
}

// ����������Ŀ� 
void Cube::setWide(double w)
{
	if (w < 0)
	{
		cout << "�Բ���������󣡽�������Ŀ�ֵ��Ϊ0��" << endl << endl;
		this->Wide = 0;
	}

	else
	{
		this->Wide = w;
		cout << "�ѽ�������Ŀ��ֵ��Ϊ��" << this->Wide << endl << endl;
	}
}

// ����������ĸ� 
void Cube::setHigh(double h)
{
	if (h < 0)
	{
		cout << "�Բ���������󣡽�������ĸ�ֵ��Ϊ0��" << endl << endl;
		this->High = 0;
	}

	else
	{
		this->High = h;
		cout << "�ѽ�������Ŀ��ֵ��Ϊ��" << this->High << endl << endl;
	}
}

// ����������ĳ����
void Cube::setLWH(double l, double w, double h)
{
	setLong(l);
	setWide(w);
	setHigh(h);
}

// ��ȡ������ĳ�
double Cube::getLong()
{
	return this->Long;
}

// ��ȡ������Ŀ�
double Cube::getWide()
{
	return this->Wide;
}

// ��ȡ������ĸ�
double Cube::getHigh()
{
	return this->High;
}

// ��ȡ����������
double Cube::getVolume()
{
	return (this->Long * this->Wide * this->High);
}

// ��ȡ����������
double Cube::getArea()
{
	return (this->Long * this->Wide * 6);
}

// ��������峤���
void Cube::showLWH()
{
	cout << "������ĳ�Ϊ��" << getLong() << endl;
	cout << "������Ŀ�Ϊ��" << getWide() << endl;
	cout << "������ĸ�Ϊ��" << getHigh() << endl;
}

// ������������
void Cube::showVolume()
{
	cout << "����������Ϊ��" << getVolume() << endl;
}

// ������������
void Cube::showArea()
{
	cout << "����������Ϊ��" << getArea() << endl;
}


