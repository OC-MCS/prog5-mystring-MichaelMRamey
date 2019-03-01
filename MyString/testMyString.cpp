//===========================================
//	Michael Ramey
//	3/01/19
//	Assignment 5: MyString
//===========================================
// Known bug: Returning a myString from a function does not work.
//			It calls the copy constructor like it is supposed to but then it
//			crashes when the new char array is having the data copied over.

#include <iostream>
#include "MyString.h"
using namespace std;
ostream& operator << (ostream& strm, const myString& obj); // overloaded output operator parameters for mystring.  allows cout << (mystring type) x
myString returnMS(myString);  // A function that is meant to test if myString can be returned from a function
int main()
{
	myString s1("hello"), s2 = " world", s3; // test vars for mystring
	s3 = "hello";
	//s3 = s1 + s2;  //There is an issue with adding myStrings
	s1 = s1;
	cout << s1;
	if (s1 == s2)
	{
		cout << "s1 and s2 are equal" << endl;
	}
	else
	{
		cout << "s1 and s2 are not equal" << endl;
	}
	returnMS(s1);
	return 0;
}

myString returnMS(myString str)
{
	cout << "running myString return test" << endl;
	return str;
}