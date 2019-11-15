#include "AddressBook.h"

// �˵�
void Menu(AddressBook* book)
{

	int option = -1;
	char ch = ' ';
	do
	{
		system("cls");

		cout << "---------------------------" << endl;
		cout << "|  ��ѡ����Ҫ���еĲ����� |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      1�������ϵ��      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      2��ɾ����ϵ��      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      3��������ϵ��      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      4���޸���ϵ��      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|   5����ʾ������ϵ����Ϣ |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      6�������ϵ��      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      0���˳�ͨѶ¼      |" << endl;
		cout << "---------------------------" << endl;
		cin >> option;

		switch (option)
		{

			// �˳�ϵͳ
		case 0:
			cout << "---------------------------" << endl;
			cout << "|   ��ӭ�ٴ�ʹ�ñ�ϵͳ!   |" << endl;
			cout << "---------------------------" << endl;
			return;
			break;

			// �����ϵ��
		case 1:
			addContact(book);
			break;

			// ɾ����ϵ��
		case 2:
			deleteContact(book);
			break;

			// ������ϵ��
		case 3:
			findContact(book);
			break;

			// �޸���ϵ��
		case 4:
			updateContact(book);
			break;

			// ��ʾ������ϵ����Ϣ
		case 5:
			show(book);
			break;

			// ���ͨѶ¼
		case 6:
			if (initContact(book))
			{
				cout << "---------------------" << endl;
				cout << "|  ���ͨѶ¼�ɹ��� |" << endl;
				cout << "---------------------" << endl;
			}

			else
			{
				cout << "---------------------" << endl;
				cout << "|  ���ͨѶ¼ʧ�ܣ� |" << endl;
				cout << "---------------------" << endl;
			}

			break;

			// ����������
		default:
			cout << "---------------------------" << endl;
			cout << "|    �Բ����޸ù���!    |" << endl;
			cout << "---------------------------" << endl;
			break;
		}

		cout << "-------------------------" << endl;
		cout << "| �Ƿ������������Y/N�� |" << endl;
		cout << "-------------------------" << endl;
		cin >> ch;

	} while (ch == 'y' || ch == 'Y');



}

// �����ϵ��
void addContact(AddressBook* book)
{

	int i = 0;
	if (isFull(book))
	{
		cout << "----------------------------------------" << endl;
		cout << "| ��ǰͨѶ¼�������޷����������ϵ�ˣ� |" << endl;
		cout << "----------------------------------------" << endl;
	}

	else
	{
		while (i < Max && book->arr[i].name != "  ")
		{
			i++;
		}

		
		inputDate(&book->arr[i], i);

		if (book->arr[i].name != "NULL")
		{
			cout << "-----------------------" << endl;
			cout << "|   ��ϵ����ӳɹ���  |" << endl;
			cout << "-----------------------" << endl;
		}	
		
		else 
		{
			cout << "-----------------------" << endl;
			cout << "|   ��ϵ�����ʧ�ܣ�  |" << endl;
			cout << "-----------------------" << endl;
		}

	}

}

// ɾ����ϵ��
void deleteContact(AddressBook* book)
{
	string name = " ";
	int i = 0;
	if (isEmpty(book))
	{
		cout << "------------------------------------" << endl;
		cout << "| ��ǰͨѶ¼Ϊ�գ��޷�ɾ����ϵ�ˣ� |" << endl;
		cout << "------------------------------------" << endl;
	}

	else
	{
		cout << "-----------------------------" << endl;
		cout << "|     ��������ϵ��������    |" << endl;
		cout << "-----------------------------" << endl;
		cin >> name;

		while ((i< Max) && (book->arr[i].name != name))
		{
			i++;
		}

		if (i == Max)
		{
			cout << "-----------------------" << endl;
			cout << "|     �޸���ϵ�ˣ�    |" << endl;
			cout << "-----------------------" << endl;
		}

		else
		{
			book->arr[i].name = "  ";
			book->arr[i].address = "  ";
			book->arr[i].age = -1;
			book->arr[i].sex = -1;
			book->arr[i].tel = "  ";
		}
		

		
		
	}
}

// ������ϵ��
void findContact(AddressBook* const book)
{
	int i = 0;

	string name;
	if (isEmpty(book))
	{
		cout << "------------------------------------" << endl;
		cout << "| ��ǰͨѶ¼Ϊ�գ��޷�������ϵ�ˣ� |" << endl;
		cout << "------------------------------------" << endl;

		
	}

	else
	{
		cout << "-----------------------------" << endl;
		cout << "|     ��������ϵ��������    |" << endl;
		cout << "-----------------------------" << endl;
		cin >> name;

		while (i < Max && book->arr[i].name != name)
		{
			i++;
		}

		if (i == Max)
		{
			cout << "-----------------------" << endl;
			cout << "|     �޸���ϵ�ˣ�    |" << endl;
			cout << "-----------------------" << endl;
		}

		else
		{

		}
		
	}

	
}

// �޸���ϵ��
void updateContact(AddressBook* book)
{
	int i = 0;
	string name = " ";
	
	Contact temp;

	if (isEmpty(book))
	{
		cout << "------------------------------------" << endl;
		cout << "| ��ǰͨѶ¼Ϊ�գ��޷��޸���ϵ�ˣ� |" << endl;
		cout << "------------------------------------" << endl;
	}

	else
	{
		cout << "-------------------------------------" << endl;
		cout << "|     ������Ҫ�޸ĵ���ϵ��������    |" << endl;
		cout << "-------------------------------------" << endl;
		cin >> name;

		while (i < Max && book->arr[i].name != name)
		{
			i++;
		}

		if (i == Max)
		{
			cout << "-----------------------" << endl;
			cout << "|     �޸���ϵ�ˣ�    |" << endl;
			cout << "-----------------------" << endl;
		}

		else
		{
			
			inputDate(&book->arr[i], i);

			if ((book->arr[i].name == temp.name) && (book->arr[i].sex == temp.sex) && (book->arr[i].age == temp.age) && (book->arr[i].tel == temp.tel) && (book->arr[i].address == temp.address))
			{
				cout << "-----------------------" << endl;
				cout << "|   ��ϵ���޸ĳɹ���  |" << endl;
				cout << "-----------------------" << endl;
			}

			else
			{
				cout << "-----------------------" << endl;
				cout << "|   ��ϵ���޸�ʧ�ܣ�  |" << endl;
				cout << "-----------------------" << endl;
			}
		}

		

		



	}
}

// ��ʼ�� / ���ͨѶ¼
bool initContact(AddressBook* book)
{
	int i = 0;
	while (i < Max)
	{
		book->arr[i].name = "  ";
		book->arr[i].address = "  ";
		book->arr[i].age = -1;
		book->arr[i].sex = -1;
		book->arr[i].tel = "  ";
		i++;
	}
	if (i == Max)
	{

		return true;
	}

	else
	{
		return false;
	}

}

// �п�
bool isEmpty(AddressBook* const book)
{
	int  i = 0;
	int temp = 0;
	while (i < Max)
	{
		if (book->arr[i].name != "  ")
		{
			temp++;
		}
		else
		{

		}
		i++;
	}

	if (temp == 0)
	{
		return true;
	}

	else
	{
		return false;

	}
}

// ����
bool isFull(AddressBook* const book)
{
	int  i = 0;
	int temp = 0;
	while (i < Max)
	{
		if (book->arr[i].name != "  ")
		{
			temp++;
		}
		else
		{

		}
		i++;
	}

	if (temp == (Max - 1))
	{
		return true;
	}

	else
	{
		return false;

	}
}

// ��ʾ������ϵ��
void show(AddressBook* const book)
{
	int i = 0;

	if (isEmpty(book))
	{
		cout << "-----------------------" << endl;
		cout << "|   ��ǰͨѶ¼Ϊ�գ�  |" << endl;
		cout << "-----------------------" << endl;
	}

	else
	{
		cout << "-------------------------------------------------------------------------------------------------------------" << endl;		
		cout << "|  ��ϵ�������� |----|  ��ϵ���Ա� |----|  ��ϵ�����䣺 |----|  ��ϵ�˵绰���룺 |----|  ��ϵ�˼�ͥסַ�� |" << endl;
		cout << "-------------------------------------------------------------------------------------------------------------" << endl;


		while (i < Max)
		{

			if (book->arr[i].name == "  ")
			{

			}

			else
			{
				cout << "-------------------------------------------------------------------------------------------------------------" << endl;
				
				cout << "|" << book->arr[i].name << " |----";
				if (book->arr[i].sex == 1)
				{
					cout << "|      ��      |----";
				}
				else if(book->arr[i].sex == 2)
				{
					cout << "|      Ů      |----";
				}
				else
				{
					cout << "|   �Ա��������  |----";
				}	
				cout << "|" << book->arr[i].age << " |----";
				cout << "|" << book->arr[i].tel << " |----";
				cout << "|" << book->arr[i].address << " |" << endl;
				cout << "-------------------------------------------------------------------------------------------------------------" << endl;			
			}

			i++;

		}
	}
}

// ����������ϵ����Ϣ�����ٴ�������
void inputDate(Contact* conta, int const i)
{
	Contact temp;

	cout << "-----------------------------" << endl;
	cout << "|     ��������ϵ��������    |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.name;
	conta->name = temp.name;

	cout << "-----------------------------" << endl;
	cout << "|     ��ѡ����ϵ���Ա�    |" << endl;
	cout << "|       1���У� 2��Ů       |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.sex;
	conta->sex = temp.sex;

	cout << "-----------------------------" << endl;
	cout << "|     ��������ϵ�����䣺    |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.age;
	conta->age = temp.age;

	cout << "-----------------------------" << endl;
	cout << "|   ��������ϵ�˵绰���룺  |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.tel;
	conta->tel = temp.tel;

	cout << "-----------------------------" << endl;
	cout << "|   ��������ϵ�˼�ͥסַ��  |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.address;
	conta->address = temp.address;
	
}
















