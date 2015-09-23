#include "Student.h"


//default constructor
Student::Student()
{
	//test
	id = "J00";
	firstName = "default_firstname";
	lastName = "default_lastname";
}

//overloading constructor
Student::Student(const std::string& id, const std::string& fname, const std::string& lname)
{
	this->id = id;
	this->firstName = fname;
	this->lastName = lname;
}

//destructor
Student::~Student()
{
	std::cout << "Object student is deleted.\n";
}

void Student::setID(const std::string& id)
{
	this->id = id;
}

void Student::setFirstName(const std::string& fname)
{
	this->firstName = fname;
}

void Student::setLastName(const std::string& lname)
{
	this->lastName = lname;
}

std::string Student::getID() const
{
	return id;
}

std::string Student::getFirstName() const
{
	return firstName;
}

std::string Student::getLastName() const
{
	return lastName;
}

//overload insrting operator
ostream &operator << (ostream& out, const Student& theStudent)
{
	out << theStudent.getID()
		<< " " << theStudent.getLastName()
		<< ", " << theStudent.getFirstName()
	<< endl;
	return out;
}
