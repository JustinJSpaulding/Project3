#include "Student.h"
#include "DoublyLinkedList.h"
#include "DoublyLinkedList.cpp"
#include "Student.h"


int main()
{

	Student student;

	int choice;
	auto keepGoing = true;
	while (keepGoing)
	{
		std::cout << std::endl
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

		std::cin >> choice;
		switch (choice)
		{
			case 1:
			{
				break;
			}
			case 2:
			{
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			{
				break;
			}

			case 5:
			{
				break;
			}

			case 6:
			{
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

			case 9:
			{
				break;
			}
		}
	}

	return 0;
}