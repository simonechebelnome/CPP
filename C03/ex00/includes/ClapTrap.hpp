#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
public:
    ClapTrap( void );
    ClapTrap( std::string const &Name );
    ClapTrap( ClapTrap const &copy );
    ~ClapTrap();

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;

    ClapTrap& operator=(const ClapTrap &value);
private:
    unsigned int _energyPoints;
    unsigned int _hitPoints;
    unsigned int _attackDamage;
    std::string _name;
};

#endif