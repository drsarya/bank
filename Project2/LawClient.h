#include "BaseClient.h"
#pragma once
class  LawClient : public BaseClient
{
public:
	LawClient();
	~LawClient();

	void transferMoney(int idUser, double sum);

};

