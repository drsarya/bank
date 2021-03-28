

#include "BaseClient.h"
 
#include "Bank.h"
 
 
#pragma once
class  LawClient : public BaseClient
{
public:
	LawClient(char* name) :BaseClient(name) {};
	~LawClient();

 	void transferMoney(Bank* currentBank, BaseClient* another, double sum);

};

