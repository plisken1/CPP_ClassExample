//============================================================================
// Name        : CPP_ClassExample.cpp
// Author      : Harry Nisbet
// Version     :
// Copyright   : Your copyright notice
// Description : An example of Class
//============================================================================

#include <iostream>
using namespace std;

class MyClass
{
	private:							// Not actually required.
	    int privateInt;

	public:
	    int myNum;						// Class variable
	    string myString;				// Class varibale

	    int getPrivateInt()				// Public GETTER method.
	    {
	    	return privateInt;
	    }

	    void setPrivateInt(int anInt)	// Public SETTER method.
	    {
	    	privateInt=anInt;
	    }
};

// Main part of program.
int main()
{
	MyClass o; 							// Create object of MyClass
	  o.myNum = 15;						// Assign variable to object.
	  o.myString = "Some text";			// Assign variable to object.
	  o.setPrivateInt(5);

	cout << o.myNum << endl;
	cout << o.myString << endl;
	cout << o.getPrivateInt();
	return 0;
}
