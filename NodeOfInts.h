#pragma once
#include <iostream>
#include "ListOfInts.h"
#include "NodeOfInts.h"
using namespace std;

class NodeOfInts
{
private:
	int theValue;
	NodeOfInts* next;

public:
	NodeOfInts();
};
