#include "Cube.h"


int main()
{


	Cube * c1 = new Cube(10, 20, 30);

	c1->setLWH(20, 1, 2);
	c1->showArea();
	c1->showVolume();




	system("pause");
	return 0;
}