#pragma once   // файл дизайна
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
	void MyStrcpy(MyString& obj);// копирование строк + 
	bool MyStrStr(const char* str);// поиск подстроки в строке +
	int  MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1) +
	int MyStrLen();// возвращает длину строки +
	MyString(MyString&& obj); // конструктор переноса + 
	void MyStrCat(MyString& b); // объединение строк+
	void MyDelChr(char c); // удаляет указанный символ +
	int MyStrCmp(MyString& b); // сравнение строк +
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


