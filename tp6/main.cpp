
#include <stdio.h>
#include <iostream>
#include <string>
#include "Vendeur.h"
#include "Technicien.h"
#include "Manutentionnaire.h"
#include "Personnel.h"
using namespace std;


int main(int argc, char const *argv[])
{
    Personnel personnel;
    personnel.charger("test.txt");
    personnel.afficher();
    return 0;
}
