#pragma once
#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace::std;

class tlist
{
public:
	tlist(); //default constructor sets the following: count = 0, capacity =
			 //12, and allocates memory the size of string[capacity]
	~tlist(); //destructor
	bool IsEmpty(); //return true if empty; otherwise false
	bool IsFull(); //return true if full; otherwise false
	int Search(const string &); //returns the location of the string in the dynamic array
	void Insert(const string & key); //add key to dynamic array if not full; otherwise
									 //doubles the size of the array and adds key
	void Remove(const string & key); //removes key from dynamic array if it is there;
									 //otherwise prints a message stating it was not in dynamic array
	void Display(); //displays the contents of the dynamic array
					//other functions may be implemented if necessary
private:
	string *DB; //dynamic array
	int count; //number of strings stored in the dynamic array
	int capacity; //total number of cells in the dynamic array
				  //additonal state variables you may wish add
	int search;
};
