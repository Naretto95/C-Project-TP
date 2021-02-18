#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "File.h"
#include "Video.h"
using namespace std;
class Directory
{
private:
    vector<File *> repertoire;
    string name;
public:
    Directory(string name): name{name}{};
    void add(File * File){repertoire.push_back(File);};
    void afficher() { for (auto File : repertoire)
    {
        File->afficher();
    }
    };
    unsigned int CompressionMoyen() {
        unsigned int result=0;
        for (auto File : repertoire)
        {
            result+=File->getcompressedsize();
        }
        return result/repertoire.size();
    };
    unsigned int CompressionMoyenVideo() {
        unsigned int result=0;
        unsigned int accum=0;
        for (auto File : repertoire)
        {
            if (File->isvideo())
            {
                accum+=1;
                result+=File->getcompressedsize();
            }
            
        }
        
        return result/accum;
        
    };
    ~Directory(){
        for (auto File : repertoire)
        {
            repertoire.pop_back();
        }
        
    }
};