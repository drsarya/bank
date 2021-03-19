
class BaseBill {
public:
	double sum;
	double percentCom;
	int id;
	int bankId;
	double comission;
	BaseBill();
	double getBill();
	void setInfo(double percentCom, int id, int bankId);

	bool putMoney(double money);
	bool  takeMoney(double money);
	virtual	bool transferMoney(double money, BaseBill* bill);
};