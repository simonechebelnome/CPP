#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_name) : weapon(weapon_name)
{
    this->name = name;
    this->weapon = weapon_name;
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
    return ;
}