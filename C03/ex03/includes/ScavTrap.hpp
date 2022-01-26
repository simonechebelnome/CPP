#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap( void );
    ScavTrap( ScavTrap const &other );
    ScavTrap( std::string const &name );
    ~ScavTrap ( void );
    ScavTrap &operator=( ScavTrap const &other);

    void attack(std::string const &target);
    void guardGate();
private:
    bool gateMode;
};

#endif