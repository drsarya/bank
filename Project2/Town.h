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
	//Bank* getBankById(int id);
	Bank** getBanks();
	Bank*  getBankById(int id);
	int getClientIdByUserInfo(std::string info);
	int getBankIdByUserInfo(std::string info);
	int getLength( );
	void  deleteBank(int id);
	Bank* getBankByBankInfo(std::string info);
	~Town();
};