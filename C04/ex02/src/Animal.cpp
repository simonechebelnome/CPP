#include "../includes/Animal.hpp"

Animal::Animal(){
    std::cout << "Calling Animal class constructor" << std::endl;
}

Animal::~Animal(){
    std::cout << "Calling Animal class destructor" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "Base class standard sound" << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}

