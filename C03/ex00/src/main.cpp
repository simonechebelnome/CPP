#include "../includes/ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap warrior;
    ClapTrap warrior2("Giovanni!");

    std::cout << warrior.getName() << std::endl;
    warrior2.attack("Cacca");
    warrior2.takeDamage(4);
    warrior2.beRepaired(3);
    return 0;
}