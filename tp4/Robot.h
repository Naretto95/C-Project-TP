#pragma once
#include <iostream>
#include <string>


class Robot {
	private :
		std::string name;
		std::string type;
		double price;
	public :
		Robot(){};
		Robot(const std::string & n, const std::string & t, double p):name{n},type{t},price{p}{};
		std::string getName() const {return name;};
		bool operator<(const Robot & other) const{
			return (this->price<other.price);
		};
		friend std::ostream & operator<<(std::ostream & out, const Robot & p){
			out << "name : " << p.name << " prix : " << p.price << " type : " << p.type <<std::endl;
			return out;
		};
		friend std::istream & operator>>(std::istream & in, Robot & p){
			std::string c;
			if (!(in >> p.name >>p.type>> p.price)) {
				in.setstate(std::ios::failbit);
			}
			return in;
			};
};
