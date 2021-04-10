#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Employe
{
public:
    string nom;
    string prenom;
    string date;
public:
    Employe(){};
    Employe(string nom, string prenom, string date) : nom{nom},prenom{prenom},date{date}{};
    virtual double salaire()const=0;
    virtual string getinfo()const=0;
    friend istream & operator>>(istream & in, Employe & p){
			if (!(in >> p.nom >>p.prenom>> p.date)) {
				in.setstate(ios::failbit);
			}
			return in;
		};
    friend ostream & operator<<(ostream & out, const Employe & p){
		out << p.getinfo() <<endl;
		return out;
	};
    virtual ~Employe() {};
};