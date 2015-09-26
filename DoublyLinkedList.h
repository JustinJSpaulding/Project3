#pragma once
#include <iostream>
#include <fstream>

using namespace std;

#ifndef DoublyLinkedList_H
#define DoublyLinkedList_H

template <typename T>
class DoublyLinkedList
{
private:
	struct TemplateNode
	{
		T data;
		TemplateNode *next;
		TemplateNode *prev;
	};

	TemplateNode *currNode;
	size_t size = 0;

public:
	DoublyLinkedList();
	~DoublyLinkedList();

	bool isEmpty();
	void addToCurrent(const T &newData);
	void editCurrent(const T &newData);
	void removeCurrent();
	void sort();
	void searchFor();
	void displayList();
	void saveToFile();
	void loadFromFile();
	void displayCurrent();
	void displayNext();
	void displayPrev();
	void displayFirst(); //display first item in sorted list
	void displayLast(); //display last item in sorted list
	void getSizeOfList();
	void deleteList();
};

#endif