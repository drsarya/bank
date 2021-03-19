



#include "Bank.h"
Bank::Bank(char* name, double comission)
{
	this->name = name;
	this->length = 0;
	this->comission = comission;
	this->clientsId = 0;
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
	client->setId(this->clientsId);
	client->getBill()->setInfo(this->comission, this->length, this->id);
	clients[this->length] = client;
	this->length++;
	this->clientsId++;

}



Client** Bank::getClients()
{
	return this->clients;
}
int Bank::getLengthArr()
{
	return this->length;
}
double Bank::getBankBill() {
	double sum = 0;
	for (int i = 0; i < this->length; ++i) {
		sum += clients[i]->getBill()->comission;
	}
	return sum;
}
Client* Bank::getClientById(int id)
{
	Client* cl ;
	for (int i = 0; i < this->length; ++i)
	{
		if (clients[i]->getId() == id) {
			cl = clients[i];
			i = this->length;
		}

	}
	return cl;
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



