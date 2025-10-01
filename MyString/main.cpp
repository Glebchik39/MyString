#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	MyString obj("Hello world");
	obj.Print();

	cout<<obj.MyStrStr("wo")<<endl;

	obj.Input();
	obj.MyStrLen();
	MyString obj1 = obj;
	obj.MyStrcpy(obj1);
	int symbol = obj.MyChr('o');
	cout << symbol;
	MyString obj1 = move(obj);
	obj.MyStrCat(obj);
	obj.MyStrCat(obj1);
	obj.MyDelChr('H');
	obj.MyStrCmp(obj);
	obj.Print();
	MyString rez = obj + obj1;
	MyString rez2 = obj + " !!!";
	MyString rez3 = obj + '?';
	MyString rez4 = obj - "world";

	if (obj > obj1)
	{
		cout << "obj > obj1";
	}
	else if (obj < obj1)
	{
		cout << "obj < obj1";
	}
	else if (obj >= obj1)
	{
		cout << "obj >= obj1";
	}
	else if (obj <= obj1)
	{
		cout << "obj <= obj1";
	}
	else if (obj = obj1)
	{
		cout << "obj = obj1";
	}
	if (obj > "Hello")
	{

	}

}