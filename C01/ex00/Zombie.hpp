/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:43:11 by smenna            #+#    #+#             */
/*   Updated: 2021/09/20 16:08:31 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
public:
	Zombie( void );
	~Zombie( void );
	
	void announce( void );
	void set_name(std::string name);
	
private:
	std::string _name;
	
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif