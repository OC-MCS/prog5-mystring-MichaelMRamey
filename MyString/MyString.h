#pragma once
#include <iostream>
using namespace std;
class myString
{
private:
	char* str;
public:
	myString();										// Default constructor
	myString(const char*);							// Constructor for user to enter info
	myString(const myString&);						// Copy constructor
	~myString();									// Destructor
	void operator = (const myString&);				// Overloaded assignment (equals) operator
	char* c_str() const;							// Getter function to implement overloaded output operator
	myString operator + (const myString & other);	// Overloaded addition operator
	bool operator == (const myString & other);		// Overloaded == operator
};

