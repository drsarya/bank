
#include "Town.h"
 
 
Town::Town() {
	length = 0;
	 
}

Bank* Town::addBank(char* name, double comission)
{
	Bank* bank = new Bank(name, comission);
	if (this->length < 10) {
 		banks[this->length] = bank;
		this->length++;
		 
	}
	return bank;
}


Bank** Town::getBanks()
{
	return this->banks;
}
Bank* Town::getBankById(int id)
{
	Bank* bank = NULL;
	//int id = ParserStringsInfo::getBankIdByUserInfo(info);
	for (int i = 0; i < length; ++i)
	{
		if (banks[i]->getId() == id) {
			bank = banks[i];
			i = length;
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
