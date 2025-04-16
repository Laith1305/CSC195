#include "Human.h"
#include <iostream>
int Human::m_count = 0;
const float Human::m_tax = 0.0825f;

void func() {
	std::cout << "funky\n";
}


void Human::SetAge(age_t age) {
	m_age = age;
}