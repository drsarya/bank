#include "BaseBill.h"
class LawBill : public BaseBill {

public:
	LawBill() :BaseBill() {}
	void  transferMoney(double money, BaseBill* bill);
};