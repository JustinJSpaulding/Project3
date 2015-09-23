#pragma once
#include <iostream>
#include <fstream>

#ifndef DoublyLinkedList_H
#define DoublyLinkedList_H

template <typename T>
class TemplateNode
{
private:
	T data;
	TemplateNode<T> *next;
	TemplateNode<T> *prev;
};


template <typename T>
class DoublyLinkedList
{
private:
	TemplateNode<T> *currNode;

public:
	DoublyLinkedList();
	~DoublyLinkedList();

	void addToCurrent(T newData);
	void editCurrent(T newData);
	void removeCurrent();
	void sort();
	void searchFor(std::string keyword);
	void displayList();
	void saveToFile();
	void loadFromFile();
	void displayCurrent();
	void displayNext();
	void displayPrev();
	void displayFirst(); //display first item in sorted list
	void displayLast();	//display last item in sorted list
	void getSizeOfList();
	void deleteList();
};

#endif
