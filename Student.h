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

	string getID() const;
	string getFirstName() const;
	string getLastName() const;
};

#endif
