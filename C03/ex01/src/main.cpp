#include "../includes/ScavTrap.hpp"

int main()
{
    ScavTrap Zombie("Wise");
	ScavTrap human("Jimmy");

	human = Zombie;

	ScavTrap elf(human);

	elf.attack("Congo");

	human.attack("Jimmy");
	human.beRepaired(10);
	human.takeDamage(20);
	human.guardGate();

	return 0;
}