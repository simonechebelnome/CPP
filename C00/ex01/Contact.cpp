/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:08:15 by smenna            #+#    #+#             */
/*   Updated: 2021/09/24 14:08:16 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void PhoneBook::add_contact_info(int i)
{
    std::cout << "\e[0;35mFirst name: \e[0;32m";
    std::cin >> this->person[i].first_name;
    std::cout << "\e[0;35mLast name: \e[0;32m";
    std::cin >> this->person[i].last_name;
    std::cout << "\e[0;35mNickname: \e[0;32m";
    std::cin >> this->person[i].nickname;
    std::cout << "\e[0;35mPhone Number: \e[0;32m";
    std::cin >> this->person[i].phone_number;
    std::cout << "\e[0;35mDarkest Secret: \e[0;32m";
    std::cin >> this->person[i].darkest_secret;
}

void PhoneBook::print_info(int i)
{
    std::cout << std::setw(16) << "\e[1;36mFirst Name: \e[0;32m" << this->person[i].first_name << std::endl;
    std::cout << std::setw(16) << "\e[1;36mLast Name: \e[0;32m" << this->person[i].last_name << std::endl;
    std::cout << std::setw(16) << "\e[1;36mNickname: \e[0;32m" << this->person[i].nickname << std::endl;
    std::cout << std::setw(16) << "\e[1;36mPhone Number: \e[0;32m" << this->person[i].phone_number << std::endl;
    std::cout << std::setw(16) << "\e[1;36mDarkest Secret: \e[0;32m" << this->person[i].darkest_secret << std::endl;
}

void PhoneBook::print_data(int i)
{
    std::cout << "\e[0;32m|" << std::setw(10) << i + 1;
    std::cout << "\e[0;32m|\e[0m";
	std::cout << std::setw(10) << str_trunc(this->person[i].first_name);
    std::cout << "\e[0;32m|\e[0m";
	std::cout << std::setw(10) << str_trunc(this->person[i].last_name);
    std::cout << "\e[0;32m|\e[0m";
	std::cout << std::setw(10) << str_trunc(this->person[i].nickname);
    std::cout << "\e[0;32m|\e[0m";
    std::cout << std::endl;
}