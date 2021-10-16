#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap Zombie("Rob");
	ScavTrap human("Jimmy");

	human = Zombie;

	human.attack("Jimmy");
	human.beRepaired(10);
	human.takeDamage(20);
	human.guardGate();

	return 0;
}