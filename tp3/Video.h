#pragma once
#include <stdio.h>
#include <iostream>
#include "File.h"
using namespace std;
class Video : public File
{
private:
    unsigned int duration;
public:
    Video(string name, string extension, unsigned int size, unsigned int duration):File(name,extension,size),duration{duration}{};
    unsigned int getcompressedsize() override{ return (duration*80)/100;
    };
    bool isvideo() override{return true;};
    bool istext() override{return false;};
    bool isimage() override{return false;};
    void afficher() const { File::afficher(); cout <<"duration : "<<duration<<endl;};
};