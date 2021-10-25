#include "../includes/Cat.hpp"

Cat::Cat(){
    std::cout << "Calling Cat class constructor" << std::endl;
    this->type = "Cat";
    this->animalBrain = new Brain();
}

Cat::~Cat(){
    std::cout << "Calling Cat class destructor" << std::endl;
    delete this->animalBrain;
}

void Cat::makeSound() const{
    std::cout << "Meooooowwww" << std::endl;
}

std::string Cat::getType() const{
    return this->type;
}

Cat &Cat::operator=(Cat const &other) {
	this->type = other.type;
	this->animalBrain = other.animalBrain;
	return *this;
}

Cat::Cat(const Cat &other) : Animal(){
	*this = other;
	std::cout << "Cat copy constructor called." << std::endl;
}