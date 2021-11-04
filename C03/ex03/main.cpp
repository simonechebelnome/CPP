#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap lollo("lollo");
    DiamondTrap franco("franco");
    DiamondTrap gigi("gigi");
    DiamondTrap bo;

    lollo.attack("franco");
    franco.takeDamage(10);
    gigi.attack("franco");
    franco.takeDamage(10);
    franco.beRepaired(100);
    gigi.whoAmI();
}