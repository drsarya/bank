//#include "IdGeneratorUnique.h"
#include <iostream>
#include "Town.h"
int main() {
	Town* town = new Town();
	IdGeneratorUnique::generateId();
	IdGeneratorUnique::generateId();
	IdGeneratorUnique::generateId();
	int u =IdGeneratorUnique::generateId();
	 std::cout << u ;
	system("PAUSE");
	return EXIT_SUCCESS;
}