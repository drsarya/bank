#include "BaseBill.h"

BaseBill::BaseBill() {
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

void BaseBill::putMoney(double money)
{
	if (money < 0) {
		throw gcnew System::ArgumentException("Некорректная сумма");
	}
	this->sum += money;
}

void BaseBill::takeMoney(double money)
{
	if (money < 0) {
		throw gcnew System::ArgumentException("Некорректная сумма");
	}

	if (this->sum - money < 0) {
		throw gcnew System::ArgumentException("Недостаточно средств");
	}
	this->sum -= money;
}



void BaseBill::transferMoney(double money, BaseBill* bill)
{
	if (money < 0) {
		throw gcnew System::ArgumentException("Некорректная сумма");
	}
	if (bill->id == this->id && bill->bankId == this->bankId) {
		throw gcnew System::ArgumentException("Перевод себе невозможно осуществить");
	}
	if (bill->bankId == this->bankId) {
		if (sum - money >= 0) {
			this->takeMoney(money);
			double comission = money * this->percentCom;
			this->comission += comission;
			double realSum = money - comission;
			bill->putMoney(realSum);
		}
		else {
			throw gcnew System::ArgumentException("Недостаточно средств");
		}
	}
	else {
		throw gcnew System::ArgumentException("Недостаточно прав для перевода");
	}
}

BaseBill::~BaseBill()
{
	delete this;
}



