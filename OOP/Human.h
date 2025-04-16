#include <iostream>
#pragma once

using age_t = unsigned short;

class Human {


public:

	enum class Type {
		STUDENT,
		TEACHER
	};
	
public:
	Human() {

		std::cout << "constructor\n";
		m_count++;
	};
	Human(std::string name, age_t age) :
		m_name{ name },
		m_age{ age }
	{
		std::cout << "human constructor\n";
		m_count++;
		//image = new unsigned char[435];

	}

	~Human() {
		std::cout << "destructor\n";
		//delete image;
		m_count--;

	}

	std::string GetName() { return m_name; }
	age_t GetAge() { return m_age; }
	void SetAge(age_t age);

	static int GetCount() { return m_count; }

	virtual Type GetType() { return Type::STUDENT; }

	virtual void Work() { std::cout << "Human Working\n" << std::endl; }
private:
	std::string m_name;
	age_t m_age = 0;
	static int m_count;
	static const float m_tax;



};

void func();