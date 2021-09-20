#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie* zombie = newZombie(name);
    zombie->announce();
    return ;
}