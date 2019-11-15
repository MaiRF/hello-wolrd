#include "AddressBook.h"

// 菜单
void Menu(AddressBook* book)
{

	int option = -1;
	char ch = ' ';
	do
	{
		system("cls");

		cout << "---------------------------" << endl;
		cout << "|  请选择您要进行的操作： |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      1、添加联系人      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      2、删除联系人      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      3、查找联系人      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      4、修改联系人      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|   5、显示所有联系人信息 |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      6、清空联系人      |" << endl;
		cout << "---------------------------" << endl;
		cout << "---------------------------" << endl;
		cout << "|      0、退出通讯录      |" << endl;
		cout << "---------------------------" << endl;
		cin >> option;

		switch (option)
		{

			// 退出系统
		case 0:
			cout << "---------------------------" << endl;
			cout << "|   欢迎再次使用本系统!   |" << endl;
			cout << "---------------------------" << endl;
			return;
			break;

			// 添加联系人
		case 1:
			addContact(book);
			break;

			// 删除联系人
		case 2:
			deleteContact(book);
			break;

			// 查找联系人
		case 3:
			findContact(book);
			break;

			// 修改联系人
		case 4:
			updateContact(book);
			break;

			// 显示所有联系人信息
		case 5:
			show(book);
			break;

			// 清空通讯录
		case 6:
			if (initContact(book))
			{
				cout << "---------------------" << endl;
				cout << "|  清空通讯录成功！ |" << endl;
				cout << "---------------------" << endl;
			}

			else
			{
				cout << "---------------------" << endl;
				cout << "|  清空通讯录失败！ |" << endl;
				cout << "---------------------" << endl;
			}

			break;

			// 非正常输入
		default:
			cout << "---------------------------" << endl;
			cout << "|    对不起，无该功能!    |" << endl;
			cout << "---------------------------" << endl;
			break;
		}

		cout << "-------------------------" << endl;
		cout << "| 是否继续操作？（Y/N） |" << endl;
		cout << "-------------------------" << endl;
		cin >> ch;

	} while (ch == 'y' || ch == 'Y');



}

// 添加联系人
void addContact(AddressBook* book)
{

	int i = 0;
	if (isFull(book))
	{
		cout << "----------------------------------------" << endl;
		cout << "| 当前通讯录已满，无法继续添加联系人！ |" << endl;
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
			cout << "|   联系人添加成功！  |" << endl;
			cout << "-----------------------" << endl;
		}	
		
		else 
		{
			cout << "-----------------------" << endl;
			cout << "|   联系人添加失败！  |" << endl;
			cout << "-----------------------" << endl;
		}

	}

}

// 删除联系人
void deleteContact(AddressBook* book)
{
	string name = " ";
	int i = 0;
	if (isEmpty(book))
	{
		cout << "------------------------------------" << endl;
		cout << "| 当前通讯录为空，无法删除联系人！ |" << endl;
		cout << "------------------------------------" << endl;
	}

	else
	{
		cout << "-----------------------------" << endl;
		cout << "|     请输入联系人姓名：    |" << endl;
		cout << "-----------------------------" << endl;
		cin >> name;

		while ((i< Max) && (book->arr[i].name != name))
		{
			i++;
		}

		if (i == Max)
		{
			cout << "-----------------------" << endl;
			cout << "|     无该联系人：    |" << endl;
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

// 查找联系人
void findContact(AddressBook* const book)
{
	int i = 0;

	string name;
	if (isEmpty(book))
	{
		cout << "------------------------------------" << endl;
		cout << "| 当前通讯录为空，无法查找联系人！ |" << endl;
		cout << "------------------------------------" << endl;

		
	}

	else
	{
		cout << "-----------------------------" << endl;
		cout << "|     请输入联系人姓名：    |" << endl;
		cout << "-----------------------------" << endl;
		cin >> name;

		while (i < Max && book->arr[i].name != name)
		{
			i++;
		}

		if (i == Max)
		{
			cout << "-----------------------" << endl;
			cout << "|     无该联系人：    |" << endl;
			cout << "-----------------------" << endl;
		}

		else
		{

		}
		
	}

	
}

// 修改联系人
void updateContact(AddressBook* book)
{
	int i = 0;
	string name = " ";
	
	Contact temp;

	if (isEmpty(book))
	{
		cout << "------------------------------------" << endl;
		cout << "| 当前通讯录为空，无法修改联系人！ |" << endl;
		cout << "------------------------------------" << endl;
	}

	else
	{
		cout << "-------------------------------------" << endl;
		cout << "|     请输入要修改的联系人姓名：    |" << endl;
		cout << "-------------------------------------" << endl;
		cin >> name;

		while (i < Max && book->arr[i].name != name)
		{
			i++;
		}

		if (i == Max)
		{
			cout << "-----------------------" << endl;
			cout << "|     无该联系人：    |" << endl;
			cout << "-----------------------" << endl;
		}

		else
		{
			
			inputDate(&book->arr[i], i);

			if ((book->arr[i].name == temp.name) && (book->arr[i].sex == temp.sex) && (book->arr[i].age == temp.age) && (book->arr[i].tel == temp.tel) && (book->arr[i].address == temp.address))
			{
				cout << "-----------------------" << endl;
				cout << "|   联系人修改成功！  |" << endl;
				cout << "-----------------------" << endl;
			}

			else
			{
				cout << "-----------------------" << endl;
				cout << "|   联系人修改失败！  |" << endl;
				cout << "-----------------------" << endl;
			}
		}

		

		



	}
}

// 初始化 / 清空通讯录
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

// 判空
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

// 判满
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

// 显示所有联系人
void show(AddressBook* const book)
{
	int i = 0;

	if (isEmpty(book))
	{
		cout << "-----------------------" << endl;
		cout << "|   当前通讯录为空！  |" << endl;
		cout << "-----------------------" << endl;
	}

	else
	{
		cout << "-------------------------------------------------------------------------------------------------------------" << endl;		
		cout << "|  联系人姓名： |----|  联系人性别： |----|  联系人年龄： |----|  联系人电话号码： |----|  联系人家庭住址： |" << endl;
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
					cout << "|      男      |----";
				}
				else if(book->arr[i].sex == 2)
				{
					cout << "|      女      |----";
				}
				else
				{
					cout << "|   性别输入错误  |----";
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

// 用于输入联系人信息，减少代码冗余
void inputDate(Contact* conta, int const i)
{
	Contact temp;

	cout << "-----------------------------" << endl;
	cout << "|     请输入联系人姓名：    |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.name;
	conta->name = temp.name;

	cout << "-----------------------------" << endl;
	cout << "|     请选择联系人性别：    |" << endl;
	cout << "|       1、男； 2、女       |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.sex;
	conta->sex = temp.sex;

	cout << "-----------------------------" << endl;
	cout << "|     请输入联系人年龄：    |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.age;
	conta->age = temp.age;

	cout << "-----------------------------" << endl;
	cout << "|   请输入联系人电话号码：  |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.tel;
	conta->tel = temp.tel;

	cout << "-----------------------------" << endl;
	cout << "|   请输入联系人家庭住址：  |" << endl;
	cout << "-----------------------------" << endl;
	cin >> temp.address;
	conta->address = temp.address;
	
}
















