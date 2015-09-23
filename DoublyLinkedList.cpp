#include "DoublyLinkedList.h"

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
void DoublyLinkedList<T>::addToCurrent(T newData)
{
	TemplateNode<T> *tempNode = new TemplateNode<T>;
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
void DoublyLinkedList<T>::editCurrent(T newData)
{
	currNode->data = newData;
}

template <typename T>
void DoublyLinkedList<T>::removeCurrent()
{
	TemplateNode<T> *tempNode;

}

template <typename T>
void DoublyLinkedList<T>::deleteList()
{
	~DoublyLinkedList();
}

