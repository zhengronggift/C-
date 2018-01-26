// tlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tlist.h"


tlist::tlist()
{
	cout << "defualt constructor has been invoked \n";
	count = 0;
	capacity = 12;
	search = 0;
	DB = new string[capacity];
	string s;
	ifstream in;
	in.open("myData.txt");

	while (!in.eof())
	{
		in >> s;
		Insert(s);
	}
	in.close();
}


tlist::~tlist()
{
	cout << "destructor has been invoked\n";
	delete[] DB;
}

void tlist::Insert(const string & key)
{
	cout << "Insert has been invoked\n";
	if (!IsFull())
	{
		DB[count] = key;
		count++;
	}
}

void tlist::Display()
{
	cout << "\nDisplay has been Invoked\n";
	for (int i = 0; i<count; i++)
	{
		cout << "Array[ " << i << " ] = " << DB[i] << endl;
	}
}

int tlist::Search(const string & key)
{
	cout << "\nSearch has been invoked \n";
	for (int i = 0; i<count; i++)
	{
		if (DB[i] == key)
		{
			cout << "\n****Item Found" << endl;
			cout << "Array[ " << i << " ] = " << DB[i] << endl;
			search = 1;
			return i;
		}
	}
	if (search == 0)
	{
		cout << "\n****Item Not Found" << endl;
	}

	return -1;
	
}
bool tlist::IsEmpty()
{
	cout << "IsEmpty Invoked" << endl;
	if (count == 0)
	{
		return 1;
	}
	return 0;
}
bool tlist::IsFull()
{
	cout << "IsFull Invoked" << endl;
	if (count == capacity)
	{
		return 1;
	}
	return 0;
}
void tlist::Remove(const string & key)
{
	cout << "\nRemove has been invoked \n";
	int i = Search(key);

	if (i != -1)
	{
		for (int j = i; j<count - 1; j++) //shifting array down
		{
			DB[j] = DB[j + 1];
		}
	}
	count--; //remove the last string in the array, so last two wont repeat
}
