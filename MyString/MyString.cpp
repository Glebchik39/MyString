#include "MyString.h" // файл реализации !
#include<iostream>
using namespace std;

MyString::MyString()
{
	length = 80;
	str = new char[length];
}

MyString::MyString(int size)
{
	length = size;
	str = new char[length];
}

MyString::MyString(const char* s) // Hello
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
}

MyString::MyString(const MyString& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
}

MyString::~MyString()
{
	delete[] str;
}

void MyString::Print()
{
	cout << str << endl;
}

void MyString::MyStrcpy(MyString& obj)
{
	str = new char[strlen(obj.str) + 1];
	strcpy_s(str, strlen(obj.str) + 1, obj.str);
	str = obj.str;
	cout << " \nConstructor Copy: " << obj.str << endl;
}

void MyString::Input()
{
	str = new char;
	cin >> str;
	length = strlen(str);
}




bool MyString::MyStrStr(const char* st)
{
	char* temp = strstr(str, st);
	if (temp != nullptr)
	{
		return true;
	}
	return false;
}

int MyString::MyChr(char c)
{
	char str[] = "Hello, world!";
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == c) {
				return i; 
		}
	}
	return -1; 

}

int MyString::MyStrLen()
{
	if (str != nullptr)
	{
		cout << "Dlina striki: " << strlen(str);
	}
	return strlen(str);
}

//void MyString::MyDelChr(char c)
//{
//	for (size_t str = 0; str < '\0'; str++)
//	{
//
//	}
//}

//void MyString::MyStrCat(MyString& b)
//{
//
//
//}


