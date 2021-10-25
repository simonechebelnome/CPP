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