#include "ListOfInts.h"
#include "NodeOfInts.h"


int main()
{
	ListOfints L;

	L.insertBack(25);
	L.insertBack(246);
	L.insertBack(250);
	L.displayList();

	L.deleteInt(246);
	L.displayList();

	L.deleteInt(25);
	L.displayList();

	L.insertBack(25);
	L.insertBack(246);
	L.insertBack(250);
	L.insertBack(246);
	L.insertBack(250);
	L.displayList();

	L.~ListOfints();

	return 0;
}