/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:23:32 by smenna            #+#    #+#             */
/*   Updated: 2021/09/22 15:23:33 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	return_error(std::string message)
{
	std::cerr << message << std::endl;
	return -1;
}

int main(int argc, char *argv[])
{
	if(argc != 4)
		return(return_error("Wrong Arguments!"));

	const std::string file_name = argv[1], s1 = argv[2], s2 = argv[3];
	if(s1.empty() || s2.empty())
		return(return_error("Empty String! "));
	
	std::ifstream read_file;
	std::ofstream write_file;
	read_file.open(file_name);
	if(!read_file)
		return(return_error("Read File creation failed!"));

	write_file.open(file_name + ".replace");
	if(!write_file)
		return(return_error("Write File creation failed!"));

	std::string line;
	while(getline(read_file, line))
	{

		while(true)
		{
			size_t	occ_index = 0;
			occ_index = line.find(s1, occ_index);
			if (occ_index == std::string::npos)
				break;
			else
			{
				line.erase(occ_index, s1.length());
				line.insert(occ_index, s2);
			}
		}
		write_file << line << std::endl;
	}
	read_file.close();
	write_file.close();
	return 0;
}