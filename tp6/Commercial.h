#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "Employe.h"
using namespace std;
class Commercial : public Employe
{
public:
    double chiffreAffaire;
public:
    Commercial(){};
    Commercial(string name, string prenom, string date,double chiffreAffaire) : Employe(name,prenom,date),chiffreAffaire{chiffreAffaire}{};
    virtual double salaire()const=0;
    virtual string getinfo()const=0;
    friend istream & operator>>(istream & in, Commercial & p){
			if (!(in >> p.nom >>p.prenom>> p.date >> p.chiffreAffaire)) {
				in.setstate(ios::failbit);
			}
			return in;
		};
    friend ostream & operator<<(ostream & out, const Commercial & p){
		out << p.getinfo() <<endl;
		return out;
	};
};