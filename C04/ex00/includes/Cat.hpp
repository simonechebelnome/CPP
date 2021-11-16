#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat( Cat const &copy );
    ~Cat();

    Cat &operator=( Cat const &copy );
    std::string getType() const;
    void makeSound() const;
protected:
    std::string type;
};

#endif