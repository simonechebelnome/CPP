/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:07:11 by smenna            #+#    #+#             */
/*   Updated: 2021/09/24 14:07:12 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
	this->func[0] = &Karen::debug;
	this->func[1] = &Karen::info;
	this->func[2] = &Karen::warning;
	this->func[3] = &Karen::error;
	return ;
}

Karen::~Karen()
{
	return ;
}

void Karen::debug()
{
	std::cout << "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void Karen::info()
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void Karen::warning()
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void Karen::error()
{
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void Karen::complain(std::string level)
{
	int i = 0;
	while(i != 4)
	{
		if(!level.compare(levels[i]))
			break ;
		i++;
	}
	switch(i)
	{
	case 0:
		(this->*func[i])();
		i++;
	case 1:
		(this->*func[i])();
		i++;
	case 2:
		(this->*func[i])();
		i++;
	case 3:
		(this->*func[i])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}