
#include "BaseClient.h"
#include "IdGeneratorUnique.h"
 
 

 
  
BaseClient::BaseClient(char* name)
{
	if (*name == NULL) {
		throw gcnew System::ArgumentException("Имя не задано");
	}
	this->id = IdGeneratorUnique::generateId();
	this->bill = new Bill();
	this->name = name;
}

 void BaseClient::transferMoney(Bank* currentBank, BaseClient* another, double sum )
{
	if (sum < 0) {
		throw gcnew System::ArgumentException("Некорректная сумма");
	}
	else if (this->bill->getSum() - (sum * currentBank->comission + sum) < 0) {
		throw gcnew System::ArgumentException("Недостаточно средств");
	}
	else if (this->id == another->id) {
		throw gcnew System::ArgumentException("Перевод себе невозможно осуществить");
	}
 
	if (currentBank->getClientById(another->id) != NULL) {
		this->takeMoney(  sum * currentBank->comission +sum );
		another->putMoney(sum);
		currentBank->bill->setSum(currentBank->bill->getSum() + sum * currentBank->comission);
	}
	else {
		throw gcnew System::ArgumentException("Недостаточно прав для перевода");
	}
}  
 

void BaseClient::putMoney(double sum)
{
	if (sum < 0) {
		throw gcnew System::ArgumentException("Некорректная сумма");
	}
	this->bill->setSum(sum + this->bill->getSum());
}

void BaseClient::takeMoney(double sum)
{
	if (sum < 0) {
		throw gcnew System::ArgumentException("Некорректная сумма");
	}
	else if (this->bill->getSum() - sum < 0) {
		throw gcnew System::ArgumentException("Недостаточно средств");
	}

	this->bill->setSum(this->bill->getSum() - sum);
}

int BaseClient::getId()
{
	return this->id;
}

void BaseClient::setBankId(int id)
{
	this->BankId = id;
}

std::string BaseClient::getClientInfo()
{
	std::string info = "ID: ";
	info += std::to_string(this->getId());
	info += " ,имя: ";
	std::string name(this->name);
	info += name;
	info += " ,ID банка: ";
	info += std::to_string(this->BankId);
	 
 
	return info;
}
