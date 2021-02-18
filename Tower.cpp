#include "Tower.h"
#include "Disk.h"
#include <iostream>
#include <string>
#include <vector>

Tower::Tower(std::string name) : name{new std::string(name)}{
}

Tower::Tower(const Tower & other) : name{new std::string(*other.name)}{
    for (size_t i = 0; i < other.tour.size(); i++)
    {
        tour.push_back(other.tour[i]);
    }
    
}

void Tower::pushDisk(Disk d){
    tour.push_back(d);
    
}

Disk Tower::popDisk(){
    Disk disque = tour.back();
    tour.pop_back();
    return disque;
}

std::string Tower::getname(){
    return *name;
}

Tower::~Tower(){
    delete name,tour;
}

std::ostream& operator<<(std::ostream& out, const Tower & p){
    for (size_t i = 0; i < p.tour.size(); i++)
    {
        out << *p.name << " diametre disk " << i << " : " << p.tour[i] << std::endl;
    }
    return out;
}