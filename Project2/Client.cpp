#include "Client.h"
 


Client::Client(char* name, BaseBill* bill )
{
	this->name = name;
	this->bill = bill;
}
void Client::setId(int id)
{
	this->id = id;
}
int Client::getId()
{
	return this->id;
}
char* Client::getName()
{
	return this->name;
}

BaseBill* Client::getBill()
{
	return this->bill;
}





Client::~Client()
{
}