#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "Commercial.h"
using namespace std;
class Representant : public Commercial
{
public:
    Representant(){};
    Representant(string name, string prenom, string date,double chiffreAffaire) : Commercial(name,prenom,date,chiffreAffaire){};
    double salaire() const override{return chiffreAffaire*0.2 + 800;};
    string getinfo()const{
        return "nom : "+nom+" prenom : "+prenom+" date : "+date+" salaire : "+to_string(this->salaire());
    };
};