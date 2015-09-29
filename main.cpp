#include "Student.h"
#include <iostream>
#include <conio.h>
#include "DoublyLinkedList.h"
#include "DoublyLinkedList.cpp"

//some change

//justin did something

//prototype
void pressAnyKey();

int main()
{
	Student objStudent;
	DoublyLinkedList<Student> studentList;
	studentList.addToCurrent(objStudent);

	cout << objStudent << endl;

	int choice;
	bool isKeepGoing = true;
	while (isKeepGoing)
	{
		cout << endl
			<< "---------------------------------------------------------------------\n"
			<< " Select an option from the menu below\n"
			<< " by entering the number of the choice\n"
			<< "---------------------------------------------------------------------\n"
			<< "\t1\tAdd student to the list in the current position\n"
			<< "\t2\tEdit the current student\n"
			<< "\t3\tRemove the current item\n"
			<< "\t4\tSort the list of students from the current position\n"
			<< "\t5\tsearching the list for a student\n"
			<< "\t6\tDisplay the list\n"
			<< "\t7\tSave the list as text file\n"
			<< "\t8\tLoad previous list from a file\n"
			<< "\t9\tDisplay the current student\n"
			<< "\t10\tDisplay next student\n"
			<< "\t11\tDisplay previous student\n"
			<< "\t12\tDisplay first (first in sort) student\n"
			<< "\t13\tDisplay last (last in sort) student\n"
			<< "\t14\tDisplay size of list\n"
			<< "\t15\tDelete list\n"
			<< "\t16\tEnd program\n"
			<< "---------------------------------------------------------------------\n\n"
			<< "Enter your choice : \n\n";

		cin >> choice;
		cin.clear();
		cin.sync();
		switch (choice)
		{
			case 1:
			{
				Student student;
				student.setID();
				student.setFirstName();
				student.setLastName();
				studentList.editCurrent(student);
				studentList.addToCurrent(student);
				break;
			}
			case 2:
			{
				Student student;
				student.setID();
				student.setFirstName();
				student.setLastName();
				studentList.editCurrent(student);
				break;
			}
			case 3: //remove current item
			{
				studentList.removeCurrent();
				break;
			}
			case 4: //sort from the current position
			{
				break;
			}

			case 5: //search
			{
				//TODO add argument into search for
				string keyword;
				studentList.searchFor();
				break;
			}

			case 6: //display list
			{
				studentList.displayList();
				break;
			}

			case 7:

			{
				break;
			}

			case 8:
			{
				break;
			}

			case 9://display current student
			{
				studentList.displayCurrent();
				pressAnyKey();
				break;
			}
			case 14: //display size of the list
			{
				studentList.getSizeOfList();
			}
			case 15: //delete list
			{
				studentList.deleteList();
			}
			case 16: //end program
			{
				isKeepGoing = false;
				cout << "The program will now end,\n";
				pressAnyKey();
				break;
			}
			default:
			{
				//FIXME crash at the end
				cout << "This option is not available.\nPlease choose other available options.\n";
				pressAnyKey();
			}
		}
	}

	return 0;
}

void pressAnyKey()
{
	cout << "Press any key to continue...\n\n";
	_getch();
}