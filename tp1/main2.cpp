#include <iostream>
#include <string.h>
#include "Tower.h"
#include "Disk.h"
#include "Game.h"

int main(int argc, char const *argv[])
{
    Disk disk1(1);
    Disk disk2(2);
    Disk disk3(3);
    Disk disk4(4);
    Tower depart("depart");
    Tower intermediaire("intermediaire");
    Tower arrivee("arrivee");
    depart.pushDisk(disk4);
    depart.pushDisk(disk3);
    depart.pushDisk(disk2);
    depart.pushDisk(disk1);
    std::cout << depart << intermediaire << arrivee;
    Game::Solve(4,&depart,&arrivee,&intermediaire);
}
