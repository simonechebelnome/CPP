/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:43:11 by smenna            #+#    #+#             */
/*   Updated: 2021/09/21 13:48:58 by smenna           ###   ########.fr       */
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
Zombie* zombieHorde( int N, std::string name );

#endif