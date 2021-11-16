#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(DiamondTrap const &other);
	DiamondTrap(std::string const &name);
	~DiamondTrap();
    
	DiamondTrap &operator=(DiamondTrap const &other);
	void attack(std::string const &target);
	void whoAmI();

private:
	std::string alt;
};

#endif