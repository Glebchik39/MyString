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
	void MyStrcpy(MyString& obj);
	void Input();
	//void MyStrcpy(MyString& obj);// копирование строк + 
	bool MyStrStr(const char* str);// поиск подстроки в строке +
	int  MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1) +
	int MyStrLen();// возвращает длину строки +
	/*void MyStrCat(MyString& b);*/ // объединение строк
	/*void MyDelChr(char c);*/ // удаляет указанный символ 
	//int MyStrCmp(MyString& b); // сравнение строк 

};

