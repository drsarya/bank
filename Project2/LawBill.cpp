#include "LawBill.h"
bool  LawBill::transferMoney(double money, BaseBill* bill)
{
	if (money < 0) {
		return false;
	}

	if (bill->id == this->id) {
		//перевод себе
		return false;
	}

	if (sum - money > 0) {
		this->takeMoney(money);
		double comission = money * this->percentCom;
		double realSum = money - comission;
		this->comission += comission;
		bill->putMoney(realSum);
		return true;
	}

	return false;
}





