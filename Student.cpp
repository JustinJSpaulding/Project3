#include "Student.h"
#include <string>


//default constructor
Student::Student()
{
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
}

void Student::setID(const std::string& id)
{
	this->id = id;
	toUpper(this->id);
}

void Student::setFirstName(const std::string& firstName)
{
	this->firstName = firstName;
	toUpper(this->firstName);
}

void Student::setLastName(const std::string& lastName)
{
	this->lastName = lastName;
	toUpper(this->lastName);
}

void Student::setID()
{
	cout << "Enter student ID.\n";
	cin >> id;
	cin.ignore();
	toUpper(id);
}

void Student::setFirstName()
{
	cout << "Enter student firstname.\n";
	cin >> firstName;
	toUpper(firstName);

}

void Student::setLastName()
{
	cout << "Enter student lastname.\n";
	cin >> lastName;
	toUpper(lastName);

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

void Student::toUpper(string& str)
{
	for (auto i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
}

//overload insrting operator
ostream &operator << (ostream& out, const Student& theStudent)
{
	out << theStudent.getID()
		<< " " << theStudent.getFirstName()
		<< " " << theStudent.getLastName();
	return out;
}