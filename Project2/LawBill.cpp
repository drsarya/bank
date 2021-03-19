#include "LawBill.h"
void  LawBill::transferMoney(double money, BaseBill* bill)
{

	if (money < 0) {
		throw gcnew System::ArgumentException("Некорректная сумма");
	}

	if (bill->id == this->id && bill->bankId == this->bankId) {
		//перевод себе
		throw gcnew System::ArgumentException("Перевод себе невозможно осуществить");
	}

	if (this->sum - money >= 0) {
		this->takeMoney(money);
		double comission = money * this->percentCom;
		double realSum = money - comission;
		this->comission += comission;
		bill->putMoney(realSum);
		 
	}
	else {
		throw gcnew System::ArgumentException("Недостаточно средств");
	}

	 
}





