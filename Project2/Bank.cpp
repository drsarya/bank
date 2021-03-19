



#include "Bank.h"
Bank::Bank(char* name, double comission)
{
	this->name = name;
	this->length = 0;
	this->comission = comission;

}
void Bank::setId(int id)
{
	this->id = id;
}
int Bank::getId()
{
	return this->id;
}
void Bank::addClient(Client* client)
{
	client->setId(this->length);
	client->getBill()->setInfo(this->comission, this->length, this->id);
	clients[this->length] = client;
	this->length++;
}



Client** Bank::getClients()
{
	return this->clients;
}
int Bank::getCurrInd()
{
	return this->length;
}
double Bank::getBankBill() {
	double sum = 0;
	for (int i = 0; i < length; ++i) {
		sum += clients[i]->getBill()->getBill();
	}
	return sum;
}
std::string  Bank::getBankInfo()
{

	std::string info = "ID: ";
	info += std::to_string(this->getId());

	info += " ,название:  ";
	std::string name(this->name);
	info += name;
	info += " ,комиссия:  ";
	info += std::to_string(this->comission);

	return info;
}
 
void Bank::deleteClient(Client* client)
{
	for (int i = client->getId(); i < length - 1; ++i)
	{
		clients[i] = clients[i + 1];
	}
	this->length--;
}



