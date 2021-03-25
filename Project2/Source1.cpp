#include "IdGeneratorUnique.h"
#include <iostream>
int main() {
	 
	IdGeneratorUnique::generateId();
	IdGeneratorUnique::generateId();
	IdGeneratorUnique::generateId();
	int u =IdGeneratorUnique::generateId();
	 std::cout << u ;
	system("PAUSE");
	return EXIT_SUCCESS;
}