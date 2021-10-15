/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:45:06 by smenna            #+#    #+#             */
/*   Updated: 2021/10/15 16:45:06 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <cmath>
# include <iostream>

class Fixed
{
public:
    Fixed(void);
    Fixed(const Fixed &other);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed(void);
    Fixed               &operator=(const Fixed &rhs);
    Fixed               &operator++(void);
    Fixed               &operator--(void);
    Fixed               operator++(int);
    Fixed               operator--(int);
    bool                operator>(const Fixed &rhs) const;
    bool                operator<(const Fixed &rhs) const;
    bool                operator>=(const Fixed &rhs) const;
    bool                operator<=(const Fixed &rhs) const;
    bool                operator==(const Fixed &rhs) const;
    bool                operator!=(const Fixed &rhs) const;
    Fixed               operator+(const Fixed &rhs) const;
    Fixed               operator-(const Fixed &rhs) const;
    Fixed               operator*(const Fixed &rhs) const;
    Fixed               operator/(const Fixed &rhs) const;
    int                 getRawBits(void) const;
    void                setRawBits(int const);
    int                 toInt(void) const;
    float               toFloat(void) const;
    static Fixed        &min(Fixed &a, Fixed &b);
    const static Fixed  &min(const Fixed &a, const Fixed &b);
    static Fixed        &max(Fixed &a, Fixed &b);
    const static Fixed  &max(const Fixed &a, const Fixed &b);

private:
    int                 _fixedPointValue;
    static const int    _fracBits;
};

std::ostream            &operator<<(std::ostream &out, Fixed const &val);

#endif