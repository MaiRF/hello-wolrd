#include "AddressBook.h"


int main()
{


	AddressBook book_1;
	AddressBook * pBook_1 = &book_1;
	
	if (initContact(pBook_1))
	{
		cout << "-----------------------" << endl;
		cout << "|  ͨѶ¼��ʼ���ɹ��� |" << endl;
		cout << "-----------------------" << endl;
	}

	else
	{
		cout << "-----------------------" << endl;
		cout << "|  ͨѶ¼��ʼ��ʧ�ܣ� |" << endl;
		cout << "-----------------------" << endl;
	}

	Menu(pBook_1);

	system("pause");
	return 0;
}