#pragma once   // ���� �������
class MyString
{
	char* str;
	int length;
public:
	MyString();	
	MyString(int size);
	MyString(const char* s);
	MyString(const MyString & obj);
	~MyString();
	void Print();
	void MyStrcpy(MyString& obj);
	void Input();
	//void MyStrcpy(MyString& obj);// ����������� ����� + 
	bool MyStrStr(const char* str);// ����� ��������� � ������ +
	int  MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1) +
	int MyStrLen();// ���������� ����� ������ +
	/*void MyStrCat(MyString& b);*/ // ����������� �����
	/*void MyDelChr(char c);*/ // ������� ��������� ������ 
	//int MyStrCmp(MyString& b); // ��������� ����� 

};

