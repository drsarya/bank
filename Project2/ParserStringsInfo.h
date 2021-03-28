#pragma once
#include <string>
class  ParserStringsInfo {
public:
	 
	static int getClientIdByUserInfo(std::string info) {
		int ind = info.find(" ");
		info = info.substr(ind + 1, info.length());
		ind = info.find(" ");
		std::string idStr = info.substr(0, ind);
		int id = std::stoi(idStr);

		return id;
	};
	static int getBankIdByBankInfo(std::string info) {
		int ind = info.find(" ");
		info = info.substr(ind + 1, info.length());
		ind = info.find(" ");
		std::string idStr = info.substr(0, ind);
		int id = std::stoi(idStr);

		return id;
	};
	static int getBankIdByUserInfo(std::string info)
	{
		for (int i = 0; i < 3; i++) {
			int ind = info.find(":");
			info = info.substr(ind + 2, info.length());
		}


		std::string idStr = info.substr(0, info.length());
		int id = std::stoi(idStr);

		return id;
	}
};