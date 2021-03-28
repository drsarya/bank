
#include "Bank.h"
#include "BaseClient.h"
#include "LawClient.h"
#include "Bill.h"
#include "IdGeneratorUnique.h"
Bank::Bank(char* name, double comission)
{
	if ( comission < 0 ||  comission >1) {
		throw gcnew System::ArgumentException("Неверная ставка");
	}

	if ( name == NULL) {
		throw  gcnew System::ArgumentException("Пyстое значение имени");
	}
	this->id = IdGeneratorUnique::generateId();
	this->name = name;
	this->length = 0;
	this->comission = comission;

}


void Bank::addClient(char* name, bool type)
{
	if (type) {
		clients[this->length] = new BaseClient(name);
	}
	else {
		clients[this->length] = new LawClient(name);
	}
	this->length++;

}



BaseClient** Bank::getClients()
{
	return this->clients;
}
int Bank::getId()
{
	return this->id;
}
int Bank::getLengthArr()
{
	return this->length;
}

Bill* Bank::getBankBill()
{
	return this->bill;
}

BaseClient* Bank::getClientById(int id)
{

	BaseClient* cl = NULL;
	for (int i = 0; i < this->length; ++i)
	{
		if (clients[i]->id == id) {
			cl = clients[i];
			i = this->length;
		}

	}
	return cl;

}
std::string  Bank::getBankInfo()
{

	std::string info = "ID: ";
	info += std::to_string(this->id);

	info += " ,название:  ";
	std::string name(this->name);
	info += name;
	info += " ,комиссия:  ";
	info += std::to_string(this->comission);

	return info;
}

Bank::~Bank()
{
	for (int i = 0; i < length; ++i)
	{
		delete 	clients[i];
	}
	delete this;
}


void Bank::deleteClient(int id)
{

	for (int i = 0; i < length; ++i)
	{
		if (clients[i]->getId() == id) {
			for (int j = i; j < length - 1; j++) {
				clients[j] = clients[j + 1];
			}
			i = length;
		}
	}
	this->length--;

}



