/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:05:46 by smenna            #+#    #+#             */
/*   Updated: 2021/10/16 13:05:46 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap( void );
    ScavTrap( ScavTrap const &other );
    ScavTrap( std::string const &name );
    ~ScavTrap ( void );
    ScavTrap &operator=( ScavTrap const &other);

    void guardGate();
private:
    bool gateMode;
};

#endif