#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


#define Max 100


// ��ϵ�˽ṹ��
typedef struct Contact
{
	// ����
	string name;
	
	// �绰����
	string tel;

	// סַ
	string address;
	
	// ����
	int age;
	
	//�Ա�
	int sex;
	
}Contact;


typedef struct AddressBook
{
	Contact arr[Max];

}AddressBook;


// �˵�
void Menu(AddressBook* book);

// �����ϵ��
void addContact(AddressBook * book);

// ɾ����ϵ��
void deleteContact(AddressBook* book);

// ������ϵ��
void findContact(AddressBook* const book);

// �޸���ϵ��
void updateContact(AddressBook* book);

// ��ʼ�� / ���ͨѶ¼
bool initContact(AddressBook* book);

// �п�
bool isEmpty(AddressBook* const book);

//����
bool isFull(AddressBook* const book);

// ��ʾͨѶ¼������ϵ��
void show(AddressBook* const book);

// ����������ϵ����Ϣ�����ٴ�������
void inputDate(Contact* conta, int const i);