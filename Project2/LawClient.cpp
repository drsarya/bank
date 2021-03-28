#include "LawClient.h"






LawClient::~LawClient()
{
	delete this;
}

void LawClient::transferMoney(Bank* currentBank, BaseClient* another, double sum)
{
	if (sum < 0) {
		throw gcnew System::ArgumentException("Некорректная сумма");
	}
	else if (this->bill->getSum() - sum * currentBank->comission < 0) {
		throw gcnew System::ArgumentException("Недостаточно средств");
	}
	else if (this->id == another->id) {
		throw gcnew System::ArgumentException("Перевод себе невозможно осуществить");
	}

	this->takeMoney(this->bill->getSum() - sum * currentBank->comission);
	another->putMoney(sum);
	currentBank->bill->setSum(currentBank->bill->getSum() + sum * currentBank->comission);

}
