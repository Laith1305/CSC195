//#include "Human.h"
#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include <vector>


int main() {

	
	std::cout << sizeof(Human) << std::endl;
	std::cout << sizeof(Student) << std::endl;
	std::cout << sizeof(Teacher) << std::endl;

	std::vector<Human*> school;

	school.push_back(new Student{"Noel", 19, 4.2f});
	school.push_back(new Teacher{"Cody", 19, "oop", 340});


	for (int i = 0; i < school.size(); i++) {

		school[i]->Work();

		//if (school[i]->GetType() == Human::Type::STUDENT) {
		if(dynamic_cast<Student*>(school[i])){
		std::cout << dynamic_cast<Student*>(school[i])->GetGpa() << std::endl;

		}
		if (dynamic_cast<Teacher*>(school[i])) {
			std::cout << dynamic_cast<Teacher*>(school[i])-> GetClassName() << std::endl;
		}



		std::cout << school[i]->GetName() << std::endl;


	}

	//Student student1{f};
	Student* student = new Student{ "Laith", 19, 3.8f };

	std::cout << student->GetName() << std::endl;
	std::cout << student->GetAge() << std::endl;
	std::cout << static_cast<int>(student->GetType()) << std::endl;


	delete student;


	

	//std::cout << Human::GetCount() << std::endl;
}

