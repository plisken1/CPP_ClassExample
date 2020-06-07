/*
 * MyOtherClass.h
 *
 *  Created on: 6 Jun 2020
 *  Updated:	7 Jun 2020
 *      Author: plisken
 */

#ifndef MYOTHERCLASS_H_
#define MYOTHERCLASS_H_
#include<iostream>

class MyOtherClass
{
public:
	MyOtherClass();
	std::string getString();		// Added
	void setString(std::string);	// Added
	std::string a;					// Added
	virtual ~MyOtherClass();

};

// TODO Add GETTER and SETTER methods


#endif /* MYOTHERCLASS_H_ */
