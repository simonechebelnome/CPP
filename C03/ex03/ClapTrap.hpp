/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:05:34 by smenna            #+#    #+#             */
/*   Updated: 2021/10/16 13:05:34 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
public:
    ClapTrap( void );
    ClapTrap( std::string const &Name );
    ClapTrap( ClapTrap const &copy );
    virtual ~ClapTrap();

    virtual void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    virtual std::string getName() const;

    ClapTrap& operator=(const ClapTrap &value);
protected:
    unsigned int _energyPoints;
    unsigned int _hitPoints;
    unsigned int _attackDamage;
    std::string _name;
};

#endif