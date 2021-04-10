#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "Employe.h"
using namespace std;
class Technicien : public Employe
{
public:
    int nbUnite;
public:
    Technicien(){};
    Technicien(string name, string prenom, string date,int nbUnite) : Employe(name,prenom,date),nbUnite{nbUnite}{};
    double salaire() const override{return nbUnite*5;};
    string getinfo()const{
        return "nom : "+nom+" prenom : "+prenom+" date : "+date+" salaire : "+to_string(this->salaire());
    };
    friend istream & operator>>(istream & in, Technicien & p){
			if (!(in >> p.nom >>p.prenom>> p.date >> p.nbUnite)) {
				in.setstate(ios::failbit);
			}
			return in;
		};
    friend ostream & operator<<(ostream & out, const Technicien & p){
		out << p.getinfo() <<endl;
		return out;
	};
};