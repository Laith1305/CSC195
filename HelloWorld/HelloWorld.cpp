#include <iostream>
#include "Student.h"
#include <string>
using namespace std;


struct Person
{

public:
    float weight;
    int age;

    
    void f() {}

};

int main() {

    f();

    Student student;
    student.SetName("BOB");
    student.Write();

    Person person;
    person.age = 19;

    unsigned int i = 82;
    std::cout << i << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(Person) << std::endl;

    cout << ++i << endl;


    
    char c = 'A';

    cout << &i << endl;



    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;
    return 0;
}
