#pragma once
#include <iostream>

using namespace std;

#ifndef Student_H
#define Student_H
class Student
{
private:
	string id;
	string firstName;
	string lastName;

public:
	//overload insertion operator
	friend ostream &operator << (ostream& out, const Student& theStudent);
	Student();
	Student(const string &id, const string &fname, const string &lname);
	~Student();

	void setID(const string &id);

	void setFirstName(const string &fname);

	void setLastName(const string &lname);

	void setID(); //get ID from user input 
	void setFirstName(); //get first name from user input
	void setLastName(); //get last name from user input


	string getID() const;
	string getFirstName() const;
	string getLastName() const;

	//convert string to UPPERCASE
	void toUpper(string &str);
};

#endif
