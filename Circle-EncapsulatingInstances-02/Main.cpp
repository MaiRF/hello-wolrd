#include "Circle.h"

int main()
{
	// 使用构造函数初始化对象
	Circle* pC1 = new Circle(0 , 0 , 6);

	pC1->showXYR();
	
	// 测试点和圆判断关系函数：
	pC1->pointAndCircle(30, 9);
	pC1->pointAndCircle(30, 6);
	pC1->pointAndCircle(30, 1);
	

	system("pause");
	return 0;
}