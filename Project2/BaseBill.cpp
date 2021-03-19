#include "BaseBill.h"

BaseBill::BaseBill( ) {
	this->sum = 0;
	this->comission = 0;

}
double BaseBill::getBill()
{
	return this->sum;
}

void BaseBill::setInfo(double percentCom, int id, int bankId)
{
	this->bankId = bankId;
	this->id = id;
	this->percentCom = percentCom;
	 
}

bool BaseBill::putMoney(double money)
{
	if (money > 0) {
	 this->sum += money;
	 return true;
	}
	return false;
}

bool BaseBill::takeMoney(double money)
{
	if (money < 0) {
		return false;
	}

	if (sum - money > 0) {
		this->sum -= money;
		return true;
	}
	return false;
}



  bool BaseBill::transferMoney(double money, BaseBill* bill)
{
	  if (money < 0) {
		  return false;
	  }

	if (bill->id == this->id) {
		//перевод себе
		return false;
	}

	if (bill->bankId == this->bankId) {
		if (sum - money > 0) {
			this->takeMoney(money);
			double comission = money * this->percentCom;
			this->comission += comission;
			double realSum = money - comission;
			bill->putMoney(realSum);
			return true;
		}
		else {
			//недостаточно средств
		}
	}
	else {
		//перевод в другой банк
	}
	return false;
}



