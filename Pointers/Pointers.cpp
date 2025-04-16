#include <iostream>




void fuc1() {
	bool b = true;
	int i = 5;

}

void fuc2() {
	bool b = false;
	float f = 10;
	fuc1();


}

void fuc3() {
	int i[100000];
	fuc3();

}


class Animal {

public:

	
	Animal(std::string name)
	{
		name_ = name;
	}

	std::string getName() {
		return name_;
	}
private:

	std::string name_;

};



void setValue(int* v) {
	*v = 5;

}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int i = 5;
	float f = 4.5f;
	//fuc2();
	{
		int* pointer = new int(5);
		std::cout << *pointer << std::endl;
		delete pointer;

	}

	Animal* dog = new Animal("Dog");
	std::cout << (*dog).getName() << std::endl;
	delete dog;
	dog = nullptr;

	

	if (dog) {

		std::cout << (*dog).getName() << std::endl;
	}



	Animal cat("Cat");
	std::cout << cat.getName() << std::endl;


	int* block = (int*)malloc(sizeof(int) * 1000);
	block[0] = 3;
	block[1] = 4;
	block[2] = 5;
	block[3] = 6;

	block++;

	std::cout << *(block + 2) << std::endl;
	free(--block);


	int v1 = 10;
	int v2 = 20;


	int* p = nullptr;

	std::cout << p << std::endl;
	p = &v1;
	*p = 5;
	std::cout << p << std::endl;
	std::cout << v1 << std::endl;

	p = &v2;
	*p = 56;
	std::cout << v2 << std::endl;

	//setValue(p);
	//v1 = 5, v2 = 56
	swap(&v1, &v2);


	std::cout << v1 << " " <<  v2 << std::endl;
}