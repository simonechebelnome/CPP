#include "../includes/Brain.hpp"

Brain::Brain(){
    std::cout << "Calling Brain class constructor" << std::endl;
}

Brain::~Brain(){
    std::cout << "Calling Brain class destructor" << std::endl;
}

Brain::Brain(const Brain &other) {
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	for (int i = 0; i < 100; ++i)
		ideas[i] = other.ideas[i];
	return *this;
}