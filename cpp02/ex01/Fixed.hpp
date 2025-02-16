/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 12:35:00 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/16 15:05:07 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    const static int fractional = 8;
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator = (const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed (const int num);
    Fixed (const float fl);
    float toFloat( void ) const;
    int toInt( void ) const;
    friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
    ~Fixed();
};






#endif