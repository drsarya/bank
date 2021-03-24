#include "Client.h"
#include <string>

class Bank
{
public:
	int id;
	Client* clients[15];
	int length;
	int clientsId;
	char* name;
	double comission;

	Bank(char* name, double comission);
	void addClient(Client* client);
	void deleteClient(int id);
	Client** getClients();
	int getId();
	void setId(int id);
 	int  getLengthArr();
	double getBankBill();
	Client* getClientById(int id);
	std::string  getBankInfo();
	~Bank();
	 
};