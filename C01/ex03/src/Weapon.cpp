#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->type = name;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void Weapon::setType(std::string name)
{
	this->type = name;
	return ;
}

std::string const &Weapon::getType()
{
	const std::string &ref = this->type;
	return ref;
}

