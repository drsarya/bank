#include "LawBill.h"
#include <string>
class Client
{
private:
	char* name;
	int id;
	BaseBill* bill;
public:
	char* getName();
	BaseBill* getBill();
	int getId();
	void setId(int id);
	void setBill(BaseBill* bill);
	Client(char* name );
	std::string  getClientInfo();
	 
	~Client();

};