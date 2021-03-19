
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


Bank* Town::getBankById(int id)
{
	Bank* bank = NULL;
	for (int i = 0; i < length && i<= id; i++) {
		if (id == banks[i]->getId()) {
			bank = banks[i];
		}
	}
	return bank;
}

Bank** Town::getBanks()
{
	return this->banks;
}
int Town::getIdByBankInfo(std::string info)
{
	int ind = info.find(" ");
	info = 	info.substr(ind+1, info.length());
	ind = info.find(" ");
	std::string idStr = info.substr(0, ind);
	int id = std::stoi(idStr  );
	return id;
}
void  Town::deleteBank(int id)
{
	for (int i = 0; i < length  ; ++i)
	{
		if (banks[i]->getId() == id) {
			for (int j = i; j < length-1; j++) {
				banks[j] = banks[j] + 1;
			}
			i = length;
		}
		
	}
	this->length--;
}
