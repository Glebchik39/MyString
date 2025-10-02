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
	void Input();
	void MyStrcpy(MyString& obj);// ����������� ����� + 
	bool MyStrStr(const char* str);// ����� ��������� � ������ +
	int  MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1) +
	int MyStrLen();// ���������� ����� ������ +
	MyString(MyString&& obj); // ����������� �������� + 
	void MyStrCat(MyString& b); // ����������� �����+
	void MyDelChr(char c); // ������� ��������� ������ +
	int MyStrCmp(MyString& b); // ��������� ����� +
	static void PrintCount();

	/*static int count;*/
	MyString operator +(MyString& obj);
	MyString operator +(const char* str);
	MyString operator + (char c);
	MyString operator - (const char* str);
	bool operator = (MyString& obj);
	bool operator > (MyString& obj);
	bool operator < (MyString& obj);
	bool operator >= (MyString& obj);
	bool operator <= (MyString& obj);
	bool operator >(const char* st);

	MyString& operator++();

	/*static void PrintCount();*/

	/*static int count;*/

};


