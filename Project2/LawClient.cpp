#include "LawClient.h"






LawClient::~LawClient()
{
	delete this;
}

void LawClient::transferMoney(Bank* currentBank, BaseClient* another, double sum)
{
	if (sum < 0) {
		throw gcnew System::ArgumentException("������������ �����");
	}
	else if (this->bill->getSum() - sum * currentBank->comission < 0) {
		throw gcnew System::ArgumentException("������������ �������");
	}
	else if (this->id == another->id) {
		throw gcnew System::ArgumentException("������� ���� ���������� �����������");
	}

	this->takeMoney(this->bill->getSum() - sum * currentBank->comission);
	another->putMoney(sum);
	currentBank->bill->setSum(currentBank->bill->getSum() + sum * currentBank->comission);

}
