#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "representant.h"
#include "Vendeur.h"
#include "Technicien.h"
#include "Manutentionnaire.h"
using namespace std;
class Personnel
{
private:
    vector<Employe*> liste;
public:
    Personnel(){};
    int size(){
        return liste.size();
    }
    void ajouter(Employe* e){
        this->liste.push_back(e);
    }
    void charger(string fichier){
        ifstream ifs(fichier);
        string phrase;
        Vendeur* V=new Vendeur();
        Representant* R=new Representant();
        Technicien* T=new Technicien();
        Manutentionnaire* M=new Manutentionnaire();
        if (ifs)
        {
            while (!ifs.eof())
            {
                ifs>>phrase;
                if (!ifs.fail())
                {
                    if (phrase=="V")
                    {
                        ifs>>*V;
                        this->liste.push_back(V);
                    }
                    if (phrase=="R")
                    {
                        ifs>>*R;
                        this->liste.push_back(R);
                    }
                    if (phrase=="T")
                    {
                        ifs>>*T;
                        this->liste.push_back(T);
                    }
                    if (phrase=="M")
                    {
                        ifs>>*M;
                        this->liste.push_back(M);
                    }
                }
                
            }
            ifs.close();
        }
    };
    void afficher(){
        for (int i = 0; i < liste.size(); i++)
        {
           cout<<liste[i]->getinfo()<<endl;
        }
    }
    bool compareEmploye(Employe* e1,Employe* e2){

    }
};