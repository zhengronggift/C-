#include "stdafx.h"
#include "tlist.h"
#include <string>
#include <iostream>

int main()
{
	tlist yourArray;
	string test;
	yourArray.Display();
	cout << endl;
	
	if (yourArray.IsEmpty())
	{
		cout << "ARRAY IS EMPTY" << endl;
	}
	else
	{
		cout << "ARRAY IS NOT EMPTY" << endl;
	}
	cout << endl;
	if (yourArray.IsFull())
	{
		cout << "ARRAY IS FULL" << endl;
	}
	else
	{
		cout << "ARRAY IS NOT FULL" << endl;
	}

	cout << "\n" << "Type in the string you want remove (this will test Search, Remove, and Display functions)" << endl;
	cin >> test;
	yourArray.Remove(test);
	yourArray.Display();
	cout << endl;
	yourArray.~tlist();
	cin >> test; //prevent the program from closing before showing result
	return 0;
}