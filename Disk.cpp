#include <iostream>
#include "Disk.h"

Disk::Disk(int diameter) : diameter{new int(diameter)}{

}
Disk::Disk(const Disk & other) : diameter{new int(*other.diameter)}{

}
Disk::~Disk(){
    delete diameter;
};

int* Disk::getdiameter(){
    return diameter;
}

std::ostream& operator<<(std::ostream& out, const Disk & p){
    out << *p.diameter << std::endl;
    return out;
}