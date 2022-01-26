#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat( Cat const &copy );
    virtual ~Cat();

    Cat &operator=( Cat const &copy );
    std::string getType() const;
    void makeSound() const;
private:
    Brain* animalBrain;
};

#endif