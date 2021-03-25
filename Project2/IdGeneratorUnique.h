#pragma once
class  IdGeneratorUnique
{
public:
	static int   id ;
	static int generateId() {
		return id++;
	};

};

 