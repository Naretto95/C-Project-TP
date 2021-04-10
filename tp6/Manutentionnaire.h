#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "Employe.h"
using namespace std;
class Manutentionnaire : public Employe
{
public:
    int nbheure;
public:
    Manutentionnaire(){};
    Manutentionnaire(string name, string prenom, string date,int nbUnite) : Employe(name,prenom,date),nbheure{nbheure}{};
    double salaire() const override{return nbheure*65;};
    string getinfo()const{
        return "nom : "+nom+" prenom : "+prenom+" date : "+date+" salaire : "+to_string(this->salaire());
    };
    friend istream & operator>>(istream & in, Manutentionnaire & p){
			if (!(in >> p.nom >>p.prenom>> p.date >> p.nbheure)) {
				in.setstate(ios::failbit);
			}
			return in;
		};
    friend ostream & operator<<(ostream & out, const Manutentionnaire & p){
		out << p.getinfo() <<endl;
		return out;
	};
};