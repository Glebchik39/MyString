#include "MyString.h" // файл реализации !
#include<iostream>
using namespace std;

MyString::MyString()
{
	length = 80;
	str = new char[length];
	count++;
}



MyString::MyString(int size)
{
	length = size;
	str = new char[length];
	count++;
}

MyString::MyString(const char* s) // Hello
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
	count++;
}

MyString::MyString(const MyString& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
	count++;
}

MyString::~MyString()
{
	delete[] str;
	count++;
}

void MyString::Print()
{
	cout << str << endl;
	count++;
}

void MyString::MyStrcpy(MyString& obj)
{
	str = new char[strlen(obj.str) + 1];
	strcpy_s(str, strlen(obj.str) + 1, obj.str);
	str = obj.str;
	cout << " \nConstructor Copy: " << obj.str << endl;
	count++;
}

void MyString::Input()
{
	str = new char[length + 1];
	cin >> str;
	length = strlen(str); 
	count++;
}




bool MyString::MyStrStr(const char* st)
{
	char* temp = strstr(str, st);
	if (temp != nullptr)
	{
		return true;
	}
	return false;
	count++;
}

int MyString::MyChr(char c)
{
	char str[] = "Hello World";
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == c) {
				return i; 
		}
	}
	return -1; 
	count++;
}

int MyString::MyStrLen()
{
	if (str != nullptr)
	{
		length = strlen(str);
		cout << "Dlina striki: " << strlen(str);
	}
	return length;
	count++;
}


MyString::MyString(MyString&& obj)
{
	str = obj.str;
	obj.str = nullptr;
	length = obj.length;
	obj.length = 0;
	cout << "Move constructor";
}

void MyString::MyStrCat(MyString& b)
{
	int maxlenght = b.length + b.length;
	char* newStr = new char[maxlenght + 1];
	cout << strcat(newStr, b.str);
	count++;
}

void MyString::MyDelChr(char c)
{
	cout << "Enter a symbol: ";
	cin >> c;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
		{
			delete[] str;
		}
	}
	count++;
}

int MyString::MyStrCmp(MyString& b)
{
	cout << "Sravnenie strok: " << strcmp(b.str, str);
	count++;
}

void MyString::PrintCount()
{
	cout << "Count = " << count << endl;
}

MyString::MyString(MyString&& obj)
{
	str = obj.str;
	obj.str = nullptr;;
	length = obj.length;
	obj.length = 0;
	cout << "Move constructor";
}

//void MyString::MyDelChr(char c)
//{
//	for (size_t str = 0; str < '\0'; str++)
//	{
//
//	}
//}


int MyString::count = 0;



