#include "Client.h"
#include <cstddef>
 
 


Client::Client(char* name  )
{
	if (name == NULL) 
		throw gcnew System::ArgumentException("�������� ������ ���");

	this->name = name;
	 
}
std::string Client::getClientInfo()
{


	std::string info = "ID: ";
	info += std::to_string(this->getId());

	info += " ,���: ";
	std::string name(this->name);
	info += name;

	info += " ,ID �����: ";
	info += std::to_string(this->bill->bankId);
	return info;
	 
}
void Client::setId(int id)
{
	this->id = id;
}
void Client::setBill(BaseBill* bill)
{
	this->bill = bill;
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