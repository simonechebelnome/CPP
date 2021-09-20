#include "Contact.hpp"

void create_contact(PhoneBook *my_phone, int ct_count)
{
	char overwrite[5];
	int  owo_flag = 1;

	if(ct_count == 8)
	{
		while(owo_flag)
		{
			std::cout << "\e[0;33mYou reached the limit of available contacts, do you want to override [y/n] ? > ";
			std::cin >> overwrite;
			if (!(strcmp(overwrite, "y")))
			{
				my_phone->add_contact_info(ct_count % 8);
				std::cout << "\e[0;31mYour contact has been successfully overwritten!" << std::endl;
				owo_flag = 0;
			}
			else if (!(strcmp(overwrite, "n")))
				owo_flag = 0;
			else
				std::cout << "\e[0;31mWrong Input!" << std::endl;
		}
	}
	if(!owo_flag)
		return ;
	my_phone->add_contact_info(ct_count);
}

std::string	str_trunc(std::string str)
{
	std::string ret;
	ret = str.substr(0, 10);
	if(ret.length() >= 10)
		ret[9] = '.';
	return(ret);
}

void	search_header()
{
	std::cout << "\e[0;32m|" << std::setw(10) << "\e[0;34m  INDEX  ";
    std::cout << "\e[0;32m|\e[0m";
	std::cout << std::setw(10) << "\e[0;34m FIRST NAME ";
    std::cout << "\e[0;32m|\e[0m";
	std::cout << std::setw(10) << "\e[0;34m LAST NAME ";
    std::cout << "\e[0;32m|\e[0m";
	std::cout << std::setw(10) << "\e[0;34m NICKNAME ";
    std::cout << "\e[0;32m|\e[0m";
    std::cout << std::endl;
}

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

int str_check(char *str, int ct_count)
{
	if(ft_strlen(str) > 1)
	{
		std::cout << "\e[0;31mINVALID INDEX!" << std::endl; 
		return(0);
	}
	if(str[0] >= '1' && str[0] <= '8' && ((str[0] - '0') - 1) < ct_count)
		return(1);
	std::cout << "\e[0;31mINVALID INDEX!" << std::endl; 
	return(0);
}

void search_contact(PhoneBook *my_phone, int ct_count)
{
	int		i = -1;
	char	index[10];

	if (!ct_count)
	{
		std::cout << "\e[0;31mThe Phonebook is empty :(" << std::endl;
		return ;
	}
	search_header();
	while (++i < ct_count)
		my_phone->print_data(i);
	std::cout << "Insert a valid index [1-8] > ";
	std::cin >> index;
	if(str_check(index, ct_count))
		my_phone->print_info((index[0] - '0') - 1);

}

int main()
{
	PhoneBook	my_phone;
	char		command[10];
	int 		ct_count = 0;

	std::cout << "\e[1;32mAvailable commands: \e[1;37mEXIT | ADD | SEARCH " << std::endl;
	while (42)
	{
		std::cout << "\e[0;34mInsert a command: \e[0;32m";
		std::cin >> command;
		if (!(strcmp(command, "EXIT")))
		{
			std::cout << "\e[0;33mBzz... Bzz... I'm exiting." << std::endl;
			return (1);
		}
		else if (!(strcmp(command, "ADD")))
		{
			create_contact(&my_phone, ct_count);
			if(ct_count < 8)
				ct_count++; 
		}
		else if (!(strcmp(command, "SEARCH")))
			search_contact(&my_phone, ct_count);
		else
			std::cout << "\e[0;33mWRONG COMMAND!" << std::endl;
	}
	return (0);
}
