#include "Teacher.h"

void Teacher::Read()
{
	std::cout << "TEACHER\n";
	Human::Read();


	std::cout << "Class Name: ";
	std::cin >> m_className;

	std::cout << "Classroom: ";
	std::cin >> m_classroom;



}

void Teacher::Write()
{
	std::cout << "Class name: " << m_className << std::endl;
	std::cout << "Classroom: " << m_classroom << std::endl;

}
