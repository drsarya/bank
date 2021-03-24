
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
	void putMoney(double money);
	void  takeMoney(double money);
	virtual	void transferMoney(double money, BaseBill* bill);
	virtual ~BaseBill();
};