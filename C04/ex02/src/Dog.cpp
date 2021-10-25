#include "../includes/Dog.hpp"

Dog::Dog(){
    std::cout << "Calling Dog class constructor" << std::endl;
    this->type = "Dog";
    this->animalBrain = new Brain();

}

Dog::~Dog(){
    std::cout << "Calling Dog class destructor" << std::endl;
    delete this->animalBrain;
}

void Dog::makeSound() const{
    std::cout << "Bau" << std::endl;
}

std::string Dog::getType() const{
    return this->type;
}

Dog &Dog::operator=(Dog const &other) {
	this->type = other.type;
	this->animalBrain = other.animalBrain;
	return *this;
}

Dog::Dog(const Dog &other) : Animal() {
	*this = other;
	std::cout << "Dog copy constructor called." << std::endl;
}