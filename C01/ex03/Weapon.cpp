/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:07:44 by smenna            #+#    #+#             */
/*   Updated: 2021/09/24 14:07:45 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

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

const std::string& Weapon::getType()
{
	const std::string &ref = this->type;
	return ref;
}

