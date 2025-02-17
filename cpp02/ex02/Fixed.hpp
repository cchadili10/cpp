/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:35:31 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/17 14:27:24 by hchadili         ###   ########.fr       */
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
    
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);

    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    
    

    
    ~Fixed();
};






#endif