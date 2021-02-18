#pragma once
#include <iostream>
#include "Disk.h"
#include <string>
#include <vector>

class Tower{
	private :
		std::string* name;
        std::vector<Disk> tour;
	public :
		Tower(std::string name);
		Tower(const Tower & other);
        void pushDisk(Disk d);
        Disk popDisk();
        std::string getname();
		~Tower();
	friend std::ostream& operator<<(std::ostream& out, const Tower & p);
};