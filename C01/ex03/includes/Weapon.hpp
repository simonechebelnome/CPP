#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
public:
	Weapon(std::string name);
	~Weapon();

	std::string const &getType();
	void	setType(std::string name); 

private:
	std::string type;
};

#endif