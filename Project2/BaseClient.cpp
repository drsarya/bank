
#include "BaseClient.h"
#include "IdGeneratorUnique.h"
 
 

 
  
BaseClient::BaseClient(char* name)
{
	if (*name == NULL) {
		throw gcnew System::ArgumentException("��� �� ������");
	}
	this->id = IdGeneratorUnique::generateId();
	this->bill = new Bill();
	 
}

 void BaseClient::transferMoney(Bank* currentBank, BaseClient* another, double sum )
{
	if (sum < 0) {
		throw gcnew System::ArgumentException("������������ �����");
	}
	else if (this->bill->getSum() - sum*currentBank->comission < 0) {
		throw gcnew System::ArgumentException("������������ �������");
	}
	else if (this->id == another->id) {
		throw gcnew System::ArgumentException("������� ���� ���������� �����������");
	}
 
	if (currentBank->getClientById(another->id) != NULL) {
		this->takeMoney(this->bill->getSum() - sum * currentBank->comission);
		another->putMoney(sum);
		currentBank->bill->setSum(currentBank->bill->getSum() + sum * currentBank->comission);
	}
	else {
		throw gcnew System::ArgumentException("������������ ���� ��� ��������");
	}
}  
 

void BaseClient::putMoney(double sum)
{
	if (sum < 0) {
		throw gcnew System::ArgumentException("������������ �����");
	}
	this->bill->setSum(sum + this->bill->getSum());
}

void BaseClient::takeMoney(double sum)
{
	if (sum < 0) {
		throw gcnew System::ArgumentException("������������ �����");
	}
	else if (this->bill->getSum() - sum < 0) {
		throw gcnew System::ArgumentException("������������ �������");
	}

	this->bill->setSum(this->bill->getSum() - sum);
}

int BaseClient::getId()
{
	return this->id;
}
