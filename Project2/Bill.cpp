#include "Bill.h"
#include "IdGeneratorUnique.h"

Bill::Bill()
{
	this->sum = 0;
	this->id = IdGeneratorUnique::generateId();
}

double Bill::getSum()
{
	return this->sum;
}



int Bill::getId()
{
	return this->id;
}
