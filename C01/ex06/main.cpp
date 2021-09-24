/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:07:16 by smenna            #+#    #+#             */
/*   Updated: 2021/09/24 14:07:17 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int return_error(std::string message)
{
	std::cerr << message << std::endl;
	return -1;
}

int main(int argc, char *argv[])
{
	Karen myKaren;
	if(argc != 2)
		return(return_error("Wrong number of arguments!"));
	myKaren.complain(argv[1]);
	return 0;
}