#include "Circle.h"

int main()
{
	// ʹ�ù��캯����ʼ������
	Circle* pC1 = new Circle(0 , 0 , 6);

	pC1->showXYR();
	
	// ���Ե��Բ�жϹ�ϵ������
	pC1->pointAndCircle(30, 9);
	pC1->pointAndCircle(30, 6);
	pC1->pointAndCircle(30, 1);
	

	system("pause");
	return 0;
}