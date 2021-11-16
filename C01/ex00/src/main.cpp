#include "../includes/Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("Ernesto");
    zombie->announce();
    randomChump("Paolo");
    delete zombie;
    return 0;
}