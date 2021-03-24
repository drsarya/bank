
#include "Town.h"
#include <iostream>

Town::Town() {
	length = 0;
	bankId = 0;
}

Bank* Town::addBank(Bank* bank)
{

	if (bank->comission < 0 || bank->comission >1) {
		throw gcnew System::ArgumentException("Неверная ставка");
	}

	if (bank->name == NULL) {
		throw  gcnew System::ArgumentException("Пyстое значение имени");
	}


	if (this->length < 10) {
		bank->setId(this->bankId);
		banks[this->length] = bank;
		this->length++;
		this->bankId++;
	}
	return bank;
}


 

Bank** Town::getBanks()
{
	return this->banks;
}
Bank* Town::getBankById(int id)
{
	Bank* bank;
	for (int i = 0; i < length; ++i)
	{
		if (banks[i]->getId() == id) {
			bank = banks[i];
			i = length;
		}
		
	}
	return bank;
}
Bank* Town::getBankByBankInfo(std::string info)
{
	int ind = info.find(" ");
	info = 	info.substr(ind+1, info.length());
	ind = info.find(" ");
	std::string idStr = info.substr(0, ind);
	int id = std::stoi(idStr  );
	Bank* bank = NULL;
	for (int i = 0; i < length && i <= id; i++) {
		if (id == banks[i]->getId()) {
			bank = banks[i];
		}
	}
	return bank;
}

Town::~Town()
{
	for (int i = 0; i < length; ++i)
	{
		delete banks[i];
	}
}

int Town::getClientIdByUserInfo(std::string info)
{
	int ind = info.find(" ");
	info = info.substr(ind + 1, info.length());
	ind = info.find(" ");
	std::string idStr = info.substr(0, ind);
	int id = std::stoi(idStr);

	return id;
}
int Town::getBankIdByUserInfo(std::string info)
{
	for (int i = 0; i < 3; i++) {
	int ind = info.find(":"); 
	info = info.substr(ind + 2, info.length());
	}
	
 
	std::string idStr = info.substr(0, info.length());
	int id = std::stoi(idStr);

	return id;
}
int Town::getLength()
{
	return this->length;
}
void  Town::deleteBank(int id)
{
	for (int i = 0; i < length  ; ++i)
	{
		if (banks[i]->getId() == id) {
			for (int j = i; j < length-1; j++) {
				banks[j] = banks[j+ 1] ;
			}
			i = length;
		}
		
	}
	this->length--;
}
