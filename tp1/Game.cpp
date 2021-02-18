#include <iostream>
#include "Game.h"
#include "Tower.h"
#include <string.h>

void Game::Solve(int n, Tower* depart, Tower* arrivee, Tower* intermediaire){
    if (n==1)
    {
        Disk disque = Disk((*depart).popDisk());
        std::cout << "de la tour " << (*depart).getname() << " a la tour " << (*arrivee).getname()<< std::endl;
        (*arrivee).pushDisk(disque);
        std::cout << (*depart) << (*arrivee) << (*intermediaire);
    }else{
        Solve(n-1,depart,intermediaire,arrivee);
        Solve(1,depart,arrivee,intermediaire);
        Solve(n-1,intermediaire,arrivee,depart);
    }
    
    

}

