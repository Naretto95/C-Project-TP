#pragma once
#include <stdio.h>
#include <iostream>
#include "File.h"
using namespace std;
class Image : public File
{
private:
    unsigned int width;
    unsigned int height;
public:
    Image(string name, string extension, unsigned int size, unsigned int width,unsigned int height):File(name,extension,size),width{width},height{height}{};
    unsigned int getcompressedsize() override{ return (width*height)/2;
    };
    bool isvideo() override{return false;};
    bool istext() override{return false;};
    bool isimage() override{return true;};
    void afficher() const { File::afficher(); cout <<"width : "<<width<< " heigth : "<<height<<endl;};
};