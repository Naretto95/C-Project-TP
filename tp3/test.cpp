#include <iostream>
#include "Text.h"
#include "Image.h"
#include "Video.h"
#include "Directory.h"

int main(int argc, char const *argv[])
{
    Image image("image","extensionimage",50,20,20);
    Text text("text","extensiontext",50,Unicode);
    Video video("video","extensionvideo",50,20);
    Video video2("video2","extensionvideo",50,20);
    Directory directory("directory");
    directory.add(&text);
    directory.add(&image);
    directory.add(&video);
    directory.add(&video2);
    directory.afficher();
    cout<<"compresion moyenne : "<<directory.CompressionMoyen()<<endl;
    cout<<"compression moyenne videos : "<<directory.CompressionMoyenVideo()<<endl;
}
