#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
public:
	Weapon(std::string name);
	~Weapon( void );

	const	std::string& getType(void);
	void	setType(std::string name); 
private:
	std::string type;
};

# endif