#pragma once
#include "Bill.h"
class BaseClient {

public:
	BaseClient();
	Bill* bill;
	virtual void transferMoney(int idUser, double sum);
	void putMoney(double sum);
	void takeMoney(double sum);

};