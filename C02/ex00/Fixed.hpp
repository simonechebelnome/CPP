/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:09:55 by smenna            #+#    #+#             */
/*   Updated: 2021/09/27 18:09:55 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>


class Fixed {
public:
    Fixed( void );
    Fixed( const Fixed &copy);
    ~Fixed( void );

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed& operator=(const Fixed &value);

private:
    int _value;
    static const int _bits;
};

#endif