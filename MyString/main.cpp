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

}