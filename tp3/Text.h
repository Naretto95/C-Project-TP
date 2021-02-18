#pragma once
#include <stdio.h>
#include <iostream>
#include "File.h"
using namespace std;
class Text : public File
{
private:
    Encoding encoding;
public:
    Text(string name, string extension, unsigned int size, Encoding encoding):File(name,extension,size),encoding{encoding}{};
    unsigned int getcompressedsize() override{if (encoding==ASCII)
    {
        return getsize()/2;
    }else
    {
        return (getsize()*60)/100;
    }
    
    };
    bool isvideo() override{return false;};
    bool istext() override{return true;};
    bool isimage() override{return false;};
    void afficher() const { File::afficher(); cout <<"encoding : "<<encoding<<endl;};
};
