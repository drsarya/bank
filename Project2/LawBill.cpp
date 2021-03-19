#include "LawBill.h"
void  LawBill::transferMoney(double money, BaseBill* bill)
{

	if (money < 0) {
		throw gcnew System::ArgumentException("������������ �����");
	}

	if (bill->id == this->id && bill->bankId == this->bankId) {
		//������� ����
		throw gcnew System::ArgumentException("������� ���� ���������� �����������");
	}

	if (this->sum - money >= 0) {
		this->takeMoney(money);
		double comission = money * this->percentCom;
		double realSum = money - comission;
		this->comission += comission;
		bill->putMoney(realSum);
		 
	}
	else {
		throw gcnew System::ArgumentException("������������ �������");
	}

	 
}





