


#ifndef HEADER_NAME
#define HEADER_NAME
 
 #include <string>
class BaseClient ;
class Bill;
class Bank
{
public:
	int id;
	BaseClient* clients[15];
	int length;
	Bill* bill;
	char* name;
	double comission;

	Bank(char* name, double comission);
	void addClient(char* name,   bool type);
	void deleteClient(int id);
	BaseClient** getClients();
	int  getId();
 	int  getLengthArr();
	Bill* getBankBill();

	BaseClient* getClientById(int id);
	std::string  getBankInfo();
	~Bank();
	 
};
#endif