#pragma once
#include <iostream>

#include "Human.h"

//string::Teacher m_classroom
using classroom_t = unsigned short;
class Teacher : public Human
{
public:
	Teacher() {}

	Teacher(std::string name, age_t age, std::string className, classroom_t classroom) :
		Human{name, age},
		m_className{ className },
		m_classroom{classroom}
	{
	//
	}

	void SetClassName(std::string className) { m_className = className; }
	std::string GetClassName() { return m_className; }

	void SetClassRoom(age_t classroom) { 
		
		if (classroom >= 300 && classroom <= 400) return;

		m_classroom = classroom;
		
	
	
	}
	
	classroom_t GetClassroom() { return m_classroom; }

	Type GetType() override { return Type::TEACHER; }
	void Work() override { std::cout << "Teacher Working!\n" << std::endl; }
private:
	std::string m_className;
	classroom_t m_classroom;

};
