#include "Human.h"
#include <iostream>
int Human::m_count = 0;
const float Human::m_tax = 0.0825f;

void func() {
	std::cout << "funky\n";
}


void Human::Read(){
	std::cout << "Enter name:";
	std::cin >> m_name;
	std::cout << "Enter age:";
	std::cin >> m_age;
}

void Human::Write(){
	std::cout << "Name:" << m_name << std::endl;
	std::cout << "Age:" << m_age << std::endl;
	
}

void Human::SetAge(age_t age) {
	m_age = age;
}