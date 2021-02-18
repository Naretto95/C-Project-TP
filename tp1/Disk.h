#pragma once
#include <iostream>

class Disk{
	private :
		int* diameter;
	public :
		Disk(int diameter);
        int* getdiameter();
        ~Disk();
		Disk(const Disk & other);
	friend std::ostream& operator<<(std::ostream& out, const Disk & p);
};