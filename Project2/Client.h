#include "LawBill.h"
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
	Client(char* name, BaseBill* bill);

	~Client();

};