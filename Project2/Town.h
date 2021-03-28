#include "Bank.h"
#include "IdGeneratorUnique.h"
class Town
{
private:
	int length;
	
 
public:
	Bank* banks[10];
	Town();
	Bank* addBank(char* name, double comission);
 	Bank** getBanks();
	Bank*  getBankById(int id);
 
	int getLength( );
	void  deleteBank(int id);
 
	~Town();
};