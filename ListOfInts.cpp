#include "ListOfInts.h"
#include "NodeOfInts.h"

ListOfints::ListOfints()
{
	head = nullptr;
}


int ListOfints::insertBack(int nodeA)
{
	NodeOfInts* newNode;
	newNode = new NodeOfInts();

	newNode->theValue = nodeA;
	//newNode->next = head;

	NodeOfInts* temp = head;

	if (head != nullptr)
	{
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		cout << "Inserted new node in front" << endl;
		
	}
	else
	{
		head = newNode;
		cout << "Inserted the first node of the list" << endl;
	}

	return newNode->theValue;
}


int ListOfints::deleteMostRecent()
{
	NodeOfInts* temp = head;
	NodeOfInts* displayPtr;
	
	for (temp = head; temp->next != nullptr; temp = temp->next)
		;

	
	displayPtr =  temp;

	delete temp;

	cout << displayPtr->theValue << " is the most recent node and therefore deleted" << endl;
	return displayPtr->theValue;
}


int ListOfints::deleteInt(int pos)
{
	
	NodeOfInts* delPtr = head;
	NodeOfInts* nodePtr = head;



	if (head->theValue == pos)
	{
		head = head->next;
		nodePtr = nullptr;
		cout << head->theValue << " Head has been deleted as pos = head" << endl;
		delete delPtr;
	}
	else
	{
		while (delPtr->next != nullptr && delPtr->theValue != pos)
		{
			nodePtr = delPtr;
			delPtr = delPtr->next;
		}
	}

	if (delPtr == nullptr)
	{
		cout << "The value pos is not in this list" << endl;
		delete delPtr;
	}

	else
	{
		delPtr->theValue == pos;
		delPtr = nodePtr;
		nodePtr = nodePtr->next;

		nodePtr = nodePtr->next;
		
		delete delPtr;

		cout << pos<< " was deleted!" << endl;
	}

	return pos;

}


void ListOfints::displayList()
{
	NodeOfInts* temp = head;

	if (head != nullptr)
	{
		while (temp != nullptr)
		{
			cout << temp->theValue << endl;
			temp = temp->next;
		}
	}
	else
	{
		cout << "The head is a null pointer, list is empty!" << endl;
	}
}


ListOfints::~ListOfints()
{
	NodeOfInts* temp = head;

	while (head != nullptr)
	{
		head = head->next;

		temp = head;

		delete temp;
	}

	
}