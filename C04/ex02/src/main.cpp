#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main() {
	Animal* animals[2];

	animals[0] = new Dog();
	animals[1] = new Cat();

	for (int i = 0; i < 1; ++i)
		delete animals[i];
}