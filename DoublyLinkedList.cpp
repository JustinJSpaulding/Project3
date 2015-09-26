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
	// IMPR efficency
	while (currNode != nullptr)
	{
		removeCurrent();
	}
}

template <typename T>
bool DoublyLinkedList<T>::isEmpty()
{
	if (currNode == nullptr)
	{
		return true;
	}
	return false;
}

//working
template <typename T>
void DoublyLinkedList<T>::addToCurrent(const T &newData)
{
	TemplateNode *tempNode = new TemplateNode;
	tempNode->data = newData;
	if (isEmpty())
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
	++size;
}

//
template <typename T>
void DoublyLinkedList<T>::editCurrent(const T &newData)
{
	if (!isEmpty())
	{
		currNode->data = newData;
	}
}

template <typename T>
void DoublyLinkedList<T>::removeCurrent()
{
	if (!isEmpty())
	{
		TemplateNode *tempNode = currNode;
		TemplateNode *prevNode = currNode->prev;
		currNode = tempNode->next;
		currNode->prev = prevNode;
		prevNode->next = currNode;
		delete tempNode;
	}
	--size;
}


template <typename T>
void DoublyLinkedList<T>::searchFor()
{
	if (!isEmpty())
	{
		TemplateNode *beginNode = currNode;
		do
		{
			//FIXME add checking keyword
			currNode = currNode->next;
		}
		while (currNode->next != beginNode);
	}
	else
	{
		cout << "The list is empty.\n";
	}
}

template <typename T>
void DoublyLinkedList<T>::displayList()
{
	if (!isEmpty())
	{
		TemplateNode *beginNode = currNode;
		do
		{
			cout << currNode->data << endl;
			currNode->next;
		}
		while (currNode != beginNode);
	}
	else
	{
		cout << "The list is empty.\n";
	}

}

template <typename T>
void DoublyLinkedList<T>::displayCurrent()
{
	cout << currNode->data;
}

template <typename T>
void DoublyLinkedList<T>::displaySize()
{
	cout << "The list has " << size << " elements.\n";
}

template <typename T>
void DoublyLinkedList<T>::deleteList()
{
	size = 0;
}

