/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:08:15 by smenna            #+#    #+#             */
/*   Updated: 2021/09/24 14:41:26 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first(std::string first)
{
    this->_first_name = first;
    return ;
}

void Contact::set_last(std::string last)
{
    this->_last_name = last;
    return ;
}

void Contact::set_number(std::string number)
{
    this->_phone_number = number;
    return ;
}

void Contact::set_nick(std::string nick)
{
    this->_first_name = nick;
    return ;
}

void Contact::set_secret(std::string secret)
{
    this->_first_name = secret;
    return ;
}

std::string Contact::get_first()
{
    return this->_first_name;
}

std::string Contact::get_last()
{
    return this->_last_name;
}

std::string Contact::get_nick()
{
    return this->_nickname;
}

std::string Contact::get_secret()
{
    return this->_darkest_secret;
}

std::string Contact::get_number()
{
    return this->_phone_number;
}

void PhoneBook::add_contact_info(int i)
{
    std::string temp;
    std::cout << "\e[0;35mFirst name: \e[0;32m";
    std::cin >> temp;
    this->person[i].set_first(temp);
    std::cout << "\e[0;35mLast name: \e[0;32m";
    std::cin >> temp;
    this->person[i].set_last(temp);
    std::cout << "\e[0;35mNickname: \e[0;32m";
    std::cin >> temp;
    this->person[i].set_nick(temp);
    std::cout << "\e[0;35mPhone Number: \e[0;32m";
    std::cin >> temp;
    this->person[i].set_number(temp);
    std::cout << "\e[0;35mDarkest Secret: \e[0;32m";
    std::cin >> temp;
    this->person[i].set_secret(temp);
}

void PhoneBook::print_info(int i)
{
    std::cout << std::setw(16) << "\e[1;36mFirst Name: \e[0;32m" << this->person[i].get_first() << std::endl;
    std::cout << std::setw(16) << "\e[1;36mLast Name: \e[0;32m" << this->person[i].get_last() << std::endl;
    std::cout << std::setw(16) << "\e[1;36mNickname: \e[0;32m" << this->person[i].get_nick() << std::endl;
    std::cout << std::setw(16) << "\e[1;36mPhone Number: \e[0;32m" << this->person[i].get_number() << std::endl;
    std::cout << std::setw(16) << "\e[1;36mDarkest Secret: \e[0;32m" << this->person[i].get_secret() << std::endl;
}

void PhoneBook::print_data(int i)
{
    std::cout << "\e[0;32m|" << std::setw(10) << i + 1;
    std::cout << "\e[0;32m|\e[0m";
	std::cout << std::setw(10) << str_trunc(this->person[i].get_first());
    std::cout << "\e[0;32m|\e[0m";
	std::cout << std::setw(10) << str_trunc(this->person[i].get_last());
    std::cout << "\e[0;32m|\e[0m";
	std::cout << std::setw(10) << str_trunc(this->person[i].get_nick());
    std::cout << "\e[0;32m|\e[0m";
    std::cout << std::endl;
}