#include "Client.h"
#include <string>

class Bank
{
public:
	int id;
	Client* clients[15];
	int length;
	char* name;
	//0 - 1
	double comission;

	Bank(char* name, double comission);
	void addClient(Client* client);
	void deleteClient(Client* client);
	Client** getClients();
	int getId();
	void setId(int id);
	int  getCurrInd();
	double getBankBill();
	std::string  getBankInfo();
	 
};