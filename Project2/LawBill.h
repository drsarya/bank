#include "BaseBill.h"
class LawBill : public BaseBill {

public:
	LawBill() :BaseBill() {}
	bool  transferMoney(double money, BaseBill* bill);
};