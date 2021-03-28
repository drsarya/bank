#pragma once

//#ifndef IDGENERATORUNIQUE
//#define IDGENERATORUNIQUE
class  IdGeneratorUnique
{
public:
	static int   id ;
	static int generateId() {
		return id++;
	};

};

 