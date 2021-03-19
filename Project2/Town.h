#include "Bank.h"
class Town
{
private:
	int length;
	int bankId;
public:
	Bank* banks[10];
	Town();
	Bank* addBank(Bank* bank);
	Bank* getBankById(int id);
	Bank** getBanks();
	void  deleteBank(int id);
	int getIdByBankInfo(std::string info);
};