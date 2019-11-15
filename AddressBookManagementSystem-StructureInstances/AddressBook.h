#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


#define Max 100


// 联系人结构体
typedef struct Contact
{
	// 姓名
	string name;
	
	// 电话号码
	string tel;

	// 住址
	string address;
	
	// 年龄
	int age;
	
	//性别
	int sex;
	
}Contact;


typedef struct AddressBook
{
	Contact arr[Max];

}AddressBook;


// 菜单
void Menu(AddressBook* book);

// 添加联系人
void addContact(AddressBook * book);

// 删除联系人
void deleteContact(AddressBook* book);

// 查找联系人
void findContact(AddressBook* const book);

// 修改联系人
void updateContact(AddressBook* book);

// 初始化 / 清空通讯录
bool initContact(AddressBook* book);

// 判空
bool isEmpty(AddressBook* const book);

//判满
bool isFull(AddressBook* const book);

// 显示通讯录所有联系人
void show(AddressBook* const book);

// 用于输入联系人信息，减少代码冗余
void inputDate(Contact* conta, int const i);