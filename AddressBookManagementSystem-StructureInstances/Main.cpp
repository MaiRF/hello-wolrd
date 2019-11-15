#include "AddressBook.h"


int main()
{


	AddressBook book_1;
	AddressBook * pBook_1 = &book_1;
	
	if (initContact(pBook_1))
	{
		cout << "-----------------------" << endl;
		cout << "|  通讯录初始化成功！ |" << endl;
		cout << "-----------------------" << endl;
	}

	else
	{
		cout << "-----------------------" << endl;
		cout << "|  通讯录初始化失败！ |" << endl;
		cout << "-----------------------" << endl;
	}

	Menu(pBook_1);

	system("pause");
	return 0;
}