#include "../includes/Dog.hpp"

Dog::Dog(){
    std::cout << "Calling Dog class constructor" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(){
    std::cout << "Calling Dog class destructor" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Bau" << std::endl;
}

std::string Dog::getType() const{
    return this->type;
}