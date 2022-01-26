#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
    this->gateMode = false;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
    std::cout << "Scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string const &name) : ClapTrap(name){
    this->gateMode = false;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap named constructor called." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &other) : ClapTrap(other), gateMode(other.gateMode){
    *this = other;
    std::cout << "ScavTrap copy construct called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Scavtrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->gateMode = other.gateMode;
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << this->_name << " Attacks " << target << ", causing " << this->_attackDamage << " DAMAGE! OMGGGGGGG" << std::endl;
    return ; 
}

void ScavTrap::guardGate() {
    this->gateMode = !gateMode;
    std::cout << "Scavtrap " << (gateMode ? "entered" : "left") << " gate keeper mode" << std::endl;
}
