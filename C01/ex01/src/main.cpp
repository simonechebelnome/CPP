#include "../includes/Zombie.hpp"

int main()
{
    const unsigned num = 10;
    const std::string name = "Luca";
    Zombie* horde = zombieHorde(num, name);
    for(size_t i = 0; i < num; i++)
        horde[i].announce();
    delete [] horde;
    return 0;
}