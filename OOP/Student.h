#pragma once
#include <iostream>
#include "Human.h"
class Student : public Human{
public:
	Student() {
		std::cout << "student constructor\n";

	}


	Student(std::string name, age_t age, float gpa) :
		Human (name, age),
		m_gpa(gpa)
		
	{
	std::cout << "student constructor\n";
	}
	void Read();
	void Write();

	Type GetType() override { return Type::STUDENT; }
	
	void SetGpa(float gpa) { m_gpa = gpa; }
	float GetGpa() { return m_gpa; }

	void Work() override { std::cout << "Student Working!\n" << std::endl; }

private:
	float m_gpa{ 4.0f };

};
