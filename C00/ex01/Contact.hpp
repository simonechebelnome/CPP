#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>

class Contact
{
	public:
		//Contact(/* args */);
		//~Contact();
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
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
