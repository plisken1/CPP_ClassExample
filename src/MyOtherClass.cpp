/*
 * MyOtherClass.cpp
 *
 *  Created on: 6 Jun 2020
 *  Updated:	7 Jun 2020
 *      Author: plisken
 */

#include "MyOtherClass.h"
#include<iostream>

std::string myString;
std::string a;

MyOtherClass::MyOtherClass()
{
	// TODO Auto-generated constructor stub
}

std::string MyOtherClass::getString()
{
	return myString;
}
void MyOtherClass::setString(std::string aStr)
{
	myString=aStr;
}


MyOtherClass::~MyOtherClass()
{
	// TODO Auto-generated destructor stub
}

