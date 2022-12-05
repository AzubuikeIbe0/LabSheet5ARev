#pragma once
#include <iostream>
#include "ListOfInts.h"
#include "NodeOfInts.h"
using namespace std;

class ListOfints
{
private:
	NodeOfInts* head;

public:
	ListOfints();
	int insertBack(int);
	int deleteMostRecent();
	int deleteInt(int pos);
	void displayList();
	~ListOfints();

};
