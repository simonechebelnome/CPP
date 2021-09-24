/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:08:17 by smenna            #+#    #+#             */
/*   Updated: 2021/09/24 14:41:05 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>

class Contact
{
	public:
		void set_first(std::string first);
		void set_last(std::string last);
		void set_nick(std::string nick);
		void set_number(std::string number);
		void set_secret(std::string secret);
		std::string get_first();
		std::string get_last();
		std::string get_nick();
		std::string get_number();
		std::string get_secret();
		
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

class PhoneBook
{
	public:
		Contact person[8];
		void	add_contact_info(int i);
		void 	print_info(int i);
		void	print_data(int i);
};

std::string	str_trunc(std::string);

#endif
