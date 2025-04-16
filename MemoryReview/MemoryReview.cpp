#include <iostream>
using namespace std;

struct Person
{
    char name[32];
    int id;
};

void Square(int i) {
    i = i * i;
}


void SquareByRef(int& i) {
    i = i * i;
}

void Double(int* ptr) {
    *ptr = (*ptr) * 2; 
}

int main() {
    int number = 5; 
    int& refNumber = number; 

    cout << "Original number: " << number << endl;

    refNumber = 7; 
    cout << "Number after changing reference: " << number << endl;

    
    cout << "When the reference was changed, the original variable also changed." << endl;

    
    cout << "Address of number: " << &number << endl;
    cout << "Address of refNumber: " << &refNumber << endl;

    
    cout << "The addresses are the same because a reference is just an alias for the original variable." << endl;

    
    Square(number); 
    cout << "After Square (by value), number is: " << number << endl;

    SquareByRef(number); 
    cout << "After SquareByRef (by reference), number is: " << number << endl;

   
    int* ptr = nullptr; 
    ptr = &number; 

    cout << "Pointer value (address it points to): " << ptr << endl;
    cout << "This is the address of the variable 'number'." << endl;

    cout << "Value pointed to by pointer: " << *ptr << endl;

   
    Double(ptr); 
    cout << "Value after Double (via pointer): " << *ptr << endl;
    cout << "Number after Double (via pointer): " << number << endl;

    cout << "Yes, the int variable's value changed when using the pointer." << endl;

    return 0;
}
