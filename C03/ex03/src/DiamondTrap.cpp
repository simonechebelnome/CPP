#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default construct called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(), FragTrap(){
    //* Questo puntatore in C è importantissimo in quanto contiene l'indirizzo di quest'oggetto nella memoria
	*this = other;
	std::cout << "DiamondTrap copy construct called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name") {
	this->alt = name;
	this->_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap named constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	this->alt = other.alt;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	return (*this);
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap " << alt << " also known as " << _name << "." << std::endl;
}