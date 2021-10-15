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

# include <cmath>
# include <iostream>

class Fixed
{
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &other);
    Fixed(const int value);
    Fixed(const float value);
    Fixed               &operator=(const Fixed &rhs);
    int                 getRawBits(void) const;
    void                setRawBits(int const);
    int                 toInt(void) const;
    float               toFloat(void) const;

private:
    int                 _fixedPointValue;
    static const int    _fracBits;
};

std::ostream            &operator<<(std::ostream &out, Fixed const &in);

#endif