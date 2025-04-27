#include "Point.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#define NAME		"Laith"
#define PI		3.14159f

//#define XBOX
//#define PS
#define SWITCH 


using names_t = std::vector<std::string>;

namespace math{

	template<typename T1, typename T2>
	T1 max(T1 a, T2 b) {
		return (a > b) ? a : b;

	}

	
}


void print(const names_t& names) {

	//names[0] = "Kevin";
	for (std::string name : names) {
		std::cout << name << std::endl;

	}
}


template<typename T>



void StreamOut(std::ostream& ostream, const T& value) {

	ostream << value << std::endl;
}


void StreamIn(std::istream& istream, std::string& text) {
	std::getline(istream, text);

	//istream >> text;
}


int main(){

#ifdef DEBUG
	std::cout << "program start\n";
#endif
#ifdef XBOX
	// xbox code here
	std::cout << "xbox\n";
#endif

#ifdef SWITCH
	// switch code
	std::cout << "switch\n";
#endif


	StreamOut(std::cout, "Abby");

	math::ipoint_t p(4, 5);

	//std::cin << p;

	std::cout << PI << std::endl;

	std::ofstream fstream("text.txt");
	StreamOut(fstream, p);
	StreamOut(fstream, "Hello!");
	StreamOut(fstream, 5);
	StreamOut(fstream, 34.4f);
	fstream.close();

	

	std::string text;
	std::ifstream ifstream("text.txt");
	if (ifstream.is_open()) {
		while (std::getline(ifstream, text)) {

			std::cout << text << std::endl;
		}
		

	}
	ifstream.close();



	math::ipoint_t p1(23, 34);
	math::ipoint_t p2(12, 10);
	math::ipoint_t p3;
	p3 = p1 - p2;
	
	std::cout << p3 << std::endl;
	std::cout << p3.GetX() << " " << p3.GetY() << std::endl;



}