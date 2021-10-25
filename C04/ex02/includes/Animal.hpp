#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
public:
    Animal();
    Animal( Animal const &copy );
    virtual ~Animal();

    Animal &operator=( Animal const &copy );
    std::string getType() const;
    virtual void makeSound() const = 0;
protected:
    std::string type;
};

#endif