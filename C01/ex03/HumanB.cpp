#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon &type)
{
    this->weapon = &type;
    return ;
}