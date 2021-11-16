#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog( Dog const &copy );
    ~Dog();

    Dog &operator=( Dog const &copy );
    std::string getType() const;
    void makeSound() const;

protected:
    std::string type;
};

#endif