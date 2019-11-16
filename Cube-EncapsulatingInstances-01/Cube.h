#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>


class Cube
{
private:
	// ������ĳ�
	double Long = 0;

	// ������Ŀ�
	double Wide = 0;
	
	// ������ĸ�
	double High = 0;


public:
	// ���캯������������ĳ� �� �� �� ��
	Cube(double l , double w , double h);	

	// ����������ĳ�
	void setLong(double l);

	// ����������ĳ� 
	void setWide(double w);

	// ����������ĳ� 
	void setHigh(double h);

	// ����������ĳ����
	void setLWH(double l, double w, double h);

	// ��ȡ������ĳ�
	double getLong();

	// ��ȡ������Ŀ�
	double getWide();

	// ��ȡ������ĸ�
	double getHigh();

	// ��ȡ����������
	double getVolume();

	// ��ȡ����������
	double getArea();

};