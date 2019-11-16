#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Circle
{

private:
	// Բ�� X ����
	double c_X = 0;
	
	// Բ�� Y ����
	double c_Y = 0;

	// Բ�İ뾶
	double c_R = 0;


public:
	// ���캯����ͬʱ��������������Բ�� Բ������ X �� Y �� �뾶R
	Circle(double X, double Y, double R);

	// ����Բ�ĵ� X ����
	void setX(double x);
		
	// ����Բ�ĵ� Y ����
	void setY(double y);

	// ����Բ�İ뾶 R
	void setR(double r);

	// ����Բ��Բ������Ͱ뾶
	void setXYR(double X, double Y, double R);

	// ��ȡԲ�ĵ� X ����
	double getX();

	// ��ȡԲ�ĵ� Y ����
	double getY();

	// ��ȡԲ�İ뾶 R
	double getR();

	// ��ʾԲ����Ϣ��Բ�����꼰�뾶
	void showXYR();

	// �жϵ���Բ�Ĺ�ϵ
	void pointAndCircle(int p_x, int p_y);


};