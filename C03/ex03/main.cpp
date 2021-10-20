#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Zombie("Rob");
	DiamondTrap human("Jimmy");

	human = Zombie;

	human.attack("Jimmy");
	human.beRepaired(10);
	human.takeDamage(20);
	human.highFivesGuys();

	return 0;
}