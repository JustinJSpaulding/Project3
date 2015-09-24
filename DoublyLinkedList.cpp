#include "DoublyLinkedList.h"
#include "Student.h"

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList()
{
	currNode = nullptr;
}

//destructor
template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList()
{

}


template <typename T>
void DoublyLinkedList<T>::addToCurrent(const T &newData)
{
	TemplateNode *tempNode = new TemplateNode;
	tempNode->data = newData;
	if (currNode == nullptr)
	{
		tempNode->next = tempNode;
		tempNode->prev = tempNode;
		currNode = tempNode;
	}
	else
	{
		currNode->next->prev = tempNode;
		tempNode->prev = currNode->prev;
		currNode->prev = tempNode;
		tempNode->next = currNode;
		currNode = tempNode;
	}
}

template <typename T>
void DoublyLinkedList<T>::editCurrent(const T &newData)
{
	currNode->data = newData;
}

template <typename T>
void DoublyLinkedList<T>::removeCurrent()
{
}

template <typename T>
void DoublyLinkedList<T>::displayCurrent()
{
	cout << currNode->data;
}

template <typename T>
void DoublyLinkedList<T>::deleteList()
{
	~DoublyLinkedList();
}

