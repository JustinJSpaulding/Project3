#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"


using namespace std;

#ifndef DoublyLinkedList_H
#define DoublyLinkedList_H

//prototype for class DoublyLinkedList in order to make "friend class" work
template <typename T>
class DoublyLinkedList;

template<typename T>
class TemplateNode
{
	friend class DoublyLinkedList<T>;
private:
	T data;
	TemplateNode *next;
	TemplateNode *prev;
};

template <typename T>
class DoublyLinkedList
{
private:
	TemplateNode<T> *currNode;
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
	void writeToFile();
	void loadFromFile();
	void displayCurrent();
	void displayNext();
	void displayPrev();
	void displayFirst(); //display first item in sorted list
	void displayLast(); //display last item in sorted list
	void displaySize();
	void getSizeOfList();
	void deleteList();
};


#endif