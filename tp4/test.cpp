#include <algorithm>
#include <functional>
#include <iostream>
#include <fstream>
#include "Robot.h"
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<Robot> Robots;
    Robot Robot1("robert","fer",3),Robot2("gericke","bronze",5),Robot3;
    std::ifstream ifs("Robots.txt");
    if (ifs)
    {
        Robot Robot4;
        while (!ifs.eof())
        {
            ifs>>Robot4;
            if (!ifs.fail())
            {
                Robots.push_back(Robot4);
            }
            
        }
        ifs.close();
    }
    for (Robot Robot4 : Robots)
    {
        if (Robot4.getName()=="Wall-e")
        {
            std::cout<<"Wall-e est present dans le vecteur"<< std::endl;
            break;
        }       
    }
    std::sort(Robots.begin(), Robots.end());
    std::ofstream ofs("SortedRobots.txt", std::ios::out);
    for (Robot Robot4 : Robots)
    {
        ofs<<Robot4;  
    }
    ofs.close();
    
    std::cout << "ecrit les attributs (name,type,price) : " << std::endl;
    std::cin>>Robot3;
    std::cout<<Robot3<<std::endl;
}
