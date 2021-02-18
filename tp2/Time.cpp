#include "Time.h"
#include <iostream>
Time::Time(unsigned short hour, unsigned short minute, unsigned short second) : hour{hour} , minute{minute}, second{second}{
}

bool Time::operator<(const Time & other) const{
    return ((hour*3600 + minute*60 + second)<(other.hour*3600 + other.minute*60 + other.second));
}

bool Time::operator<=(const Time & other) const{
    return (*this==other || *this<other);
}

bool Time::operator>=(const Time & other) const{
    return (*this==other || *this>other);
}

bool Time::operator>(const Time & other) const{
    return (!(*this < other)&& *this!=other );
}

bool Time::operator==(const Time & other) const{
    return (hour==other.hour && minute==other.minute && second==other.second);
}

bool Time::operator!=(const Time & other) const{
    return !(*this == other);
}

Time& Time::operator++(){
    try
    {
        if (second<59)
        {
            this->second=second+1;
            return *this;
        }else{
            if (minute<59)
            {
                this->second=0;
                this->minute=minute+1;
                return *this;
            }else{
                this->second=0;
                this->minute=0;
                this->hour=hour+1;
                return *this;
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Time& Time::operator--(){
    try
    { 
        if (*this <= Time(0,0,0)) {
			throw std::string("Valeur impossible !");
		}else{
            if (second>0)
            {
                this->second=second-1;
                return *this;
            }else{
                if (minute>0)
                {
                    this->second=59;
                    this->minute=minute-1;
                    return *this;
                }else{
                    this->second=59;
                    this->minute=59;
                    this->hour=hour-1;
                    return *this;
                }
            } 
        }  
    }
    catch(std::string const& chaine){
		std::cerr << chaine << std::endl;
	}
}
