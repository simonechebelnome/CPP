/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:46:48 by smenna            #+#    #+#             */
/*   Updated: 2021/09/21 14:05:51 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    const unsigned num = 10;
    const std::string name = "Luca";
    Zombie* horde = zombieHorde(num, name);
    for(size_t i = 0; i < num; i++)
        horde[i].announce();
    delete [] horde;
    return 0;
}