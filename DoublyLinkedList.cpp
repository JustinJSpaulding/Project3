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
	TemplateNode<T> *tempNode = new TemplateNode<T>;
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
		TemplateNode<T> *tempNode = currNode;
		TemplateNode<T> *prevNode = currNode->prev;
		currNode = tempNode->next;
		currNode->prev = prevNode;
		prevNode->next = currNode;
		delete tempNode;
	}
}

template <typename T>
void DoublyLinkedList<T>::searchFor()
{
	if (!isEmpty())
	{
		TemplateNode<T> *beginNode = currNode;
		do
		{
			string keyword;
			cin >> keyword;
			if (keyword.compare(keyword))
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
		TemplateNode<T> *beginNode = currNode;
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
void DoublyLinkedList<T>::writeToFile()
{
	ofstream studentTextFile("students.txt", ios::out);
	if (!studentTextFile)
	{
		cerr << "File does not exit or could not be opened.\n";
		exit(1);
	}
	TemplateNode<T> *startNode = currNode;
	// FIXME write to file 
}

// create a new list from text file
template <typename T>
void DoublyLinkedList<T>::loadFromFile()
{
	ifstream textFile("input.txt", ios::in);
	if (!textFile)
	{
		cerr << "File could not be found or opened.\n";
		exit(1);
	}
	// TODO take a look at this T::readFile(textFile);
	auto studentVector = T::readFile(textFile);
	textFile.close();
}

template <typename T>
void DoublyLinkedList<T>::displayCurrent()
{
	cout << currNode->data;
}

template <typename T>
void DoublyLinkedList<T>::displayNext()
{
	cout << currNode->next->data;
}

template <typename T>
void DoublyLinkedList<T>::displayPrev()
{
	cout << currNode->prev->data;
}

template <typename T>
void DoublyLinkedList<T>::displaySize()
{
	cout << "The list has " << getSizeOfList() << " elements.\n";
}

template <typename T>
size_t DoublyLinkedList<T>::getSizeOfList()
{
	TemplateNode<T> *startNode = currNode;
	size_t size = 0;
	if (isEmpty())
	{
		exit(1);
	}
	for (TemplateNode<T> *walkerNode; walkerNode != startNode; walkerNode = walkerNode->next)
	{
		++size;
	}
	return size;
}

template <typename T>
void DoublyLinkedList<T>::deleteList()
{
	cout << "The list is deleted.\n";
}

