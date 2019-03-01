#include "MyString.h"
#include <iostream>
using namespace std;

myString::myString()							//Default constructor
{
	str = nullptr;
}

myString::myString(const char* input)			//Secondary constructor
{
	int size = strlen(input) + 1;	// calculate the size for the dyn allocated array
	str = new char[size];
	strcpy_s(str, size, input);
}

myString::myString(const myString& other)		//Copy constructor
{
	if (this != &other)
	{
		int size = sizeof(other.str) + 1;
		str = new char[size]; 
		strcpy_s(str, size, other.str);
	}
}

myString::~myString()							//Destructor
{
	delete[] str;
}

void myString::operator =(const myString& other)//Overloaded equals operator
{
	if (this != &other)
	{
		delete[] str;
		int size = sizeof(other.str) + 1;
		str = new char[size];
		strcpy_s(str, size, other.str);
	}
}

ostream &operator<<(ostream &strm, const myString &obj)	//Overloaded output operator
{
	strm << obj.c_str();
	return strm;
}

char* myString::c_str() const					//Getter function to implement overloaded output
{
	return str;
}

myString myString::operator + (const myString& other)	//Overloaded addition operator
{
	myString temp = "0";	// Declare and initialize a temporary myString to store the concatenated string in
	int size = sizeof(str) + sizeof(other.str) + 1;
	strcpy_s(temp.str, size , str);
	strcat_s(temp.str, size,other.str);
	return temp;
}

bool myString::operator ==(const myString& other)		//Overloaded == operator
{
	bool result = 0;  // var to keep track of whether or not the two myStrings are the same
	result = !strcmp(str, other.str);
	return result;
}