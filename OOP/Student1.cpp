#include "Student.h"
#include <iostream>



void Student::Read()
{
	std::cout << "STUDENT\n";
	Human::Read();


	std::cout << "GPA: ";
	std::cin >> m_gpa;

}
void Student::Write() {
	std::cout << "GPA: " << m_gpa << std::endl;

}