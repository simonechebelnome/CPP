#include "../includes/ClapTrap.hpp"
#include <iostream>

int main()
{
    /* Constructor tests */

    ClapTrap warrior;
    ClapTrap warrior2("Giovanni!");

    /* Member function tests */

    std::cout << warrior.getName() << std::endl;
    warrior2.attack("Cacca");
    warrior2.takeDamage(4);
    warrior2.beRepaired(3);

    /* Assign overload tests */

    warrior = warrior2;
    warrior.attack("Giovanni(warrior2)");
    warrior2.attack("Undead(warrior)");
    return 0;
}