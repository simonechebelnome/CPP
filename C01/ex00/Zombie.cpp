/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:46:57 by smenna            #+#    #+#             */
/*   Updated: 2021/09/24 15:11:30 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->_name << std::endl;
    return ;
}

void Zombie::announce()
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}


