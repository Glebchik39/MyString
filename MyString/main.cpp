#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	MyString obj("Hello world");
	obj.Print();

	cout<<obj.MyStrStr("wo")<<endl;

	/*obj.Input();*/
	obj.MyStrLen();
	MyString obj1 = obj;
	obj.MyStrcpy(obj1);
	int symbol = obj.MyChr('o');
	cout << symbol;

	MyString obj1 = move(obj);
	obj.Print();
}