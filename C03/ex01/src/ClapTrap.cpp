#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : _energyPoints(10), _hitPoints(10), _attackDamage(0), _name(name) 
{
    std::cout << "Ciao io sono " << name << std::endl;
    return ;
}

ClapTrap::ClapTrap( void ) : _energyPoints(10), _hitPoints(10), _attackDamage(0), _name("Undead")
{
    std::cout << "Default Constructor Called " << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _energyPoints(copy._energyPoints), _hitPoints(copy._hitPoints), 
_attackDamage(copy._attackDamage), _name(copy._name)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Chiamata al distruttore " << _name << std::endl;
    return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	*this = other; //! This can technically does the same thing 
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << this->_name << " Attacks " << target << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
    return ; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->_name << " has been hitted, causing " << amount << " damage!" << std::endl;
    this->_energyPoints -= amount;
    return ; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->_name << " has been healed by " << amount << std::endl;
    this->_energyPoints += amount;
    return ; 
}

std::string ClapTrap::getName() const
{
    return this->_name;
}



