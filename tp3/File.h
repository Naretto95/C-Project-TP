#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

enum Encoding{ ASCII, Unicode};
class File
{
private:
    string name;
    string extension;
    unsigned int size;
public:
    File(string name, string extension, unsigned int size) : name{name},extension{extension},size{size}{};
    void afficher() const{ cout<< "name : "<<name<< " extension : "<<extension<< " size: "<<size<<endl;};
    unsigned int getsize() {return size;};
    virtual unsigned int getcompressedsize(){};
    virtual bool isvideo(){};
    virtual bool istext(){};
    virtual bool isimage(){};
    ~File(){};
};
