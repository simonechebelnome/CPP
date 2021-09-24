/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:07:02 by smenna            #+#    #+#             */
/*   Updated: 2021/09/24 14:07:03 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen;
typedef void (Karen::*fpointer)(void);

class Karen
{
public:
	Karen( void );
	~Karen( void );

	void complain(std::string level);

private:
	fpointer func[4];
	std::string levels[4];
	void debug( void );
	void info( void );
	void warning ( void );
	void error ( void );
};

#endif