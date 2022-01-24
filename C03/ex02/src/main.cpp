#include "../includes/FragTrap.hpp"

int main()
{
    FragTrap Zombie("Wise");
	FragTrap human("Jimmy");

	human = Zombie;

	human.attack("Jimmy");
	human.beRepaired(10);
	human.takeDamage(20);
	human.highFivesGuys();

	return 0;
}