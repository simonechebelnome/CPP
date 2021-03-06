#include "../includes/Cat.hpp"

Cat::Cat(){
    std::cout << "Calling Cat class constructor" << std::endl;
    this->type = "Cat";
}

Cat::~Cat(){
    std::cout << "Calling Cat class destructor" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meooooowwww" << std::endl;
}

std::string Cat::getType() const{
    return this->type;
}

Cat &Cat::operator=(Cat const &other) {
	this->type = other.type;
	return *this;
}

Cat::Cat(const Cat &other) : Animal(){
	*this = other;
	std::cout << "Cat copy constructor called." << std::endl;
}