#pragma once
#include "Bill.h"
#include "Bank.h"
 
class BaseClient {

public:
	BaseClient(char* name);
	Bill* bill;
	int id;
	char* name;
    virtual	void transferMoney(Bank* bank, BaseClient* another, double money );
	void putMoney(double sum);
	void takeMoney(double sum);
	int getId( );
};
