/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:00:20 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/18 18:34:23 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
  
}

Fixed::Fixed(const Fixed& other): value(other.value)
{

}

Fixed::Fixed(const int num):value(num << fractional)
{

}

Fixed::Fixed(float fl) : value(static_cast<int>(roundf(fl * (1 << fractional))))
{

}

Fixed& Fixed::operator = (const Fixed& other)
{
    if(this != &other)
    {
        value = other.value;   
    }

    return *this;
}

int Fixed::getRawBits( void ) const
{
   
    return value;
}

void Fixed::setRawBits( int const raw )
{
    
    value = raw;
}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(value)/ 256.0f);
}

int Fixed::toInt( void ) const
{
    return value >> fractional;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator<(const Fixed& other)const
{
    return (value < other.value);
}

bool Fixed::operator<=(const Fixed& other)const
{
    return (value <= other.value);
}

bool Fixed::operator>(const Fixed& other)const
{
    return (value > other.value);
}
bool Fixed::operator>=(const Fixed& other)const
{
    return (value >= other.value);
}

bool Fixed::operator==(const Fixed& other)const
{
    return (value == other.value);
}
bool Fixed::operator!=(const Fixed& other)const
{
    return (value != other.value);
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return (Fixed((toFloat() + other.toFloat())));
}
Fixed Fixed::operator-(const Fixed& other) const
{
    return (Fixed((toFloat() - other.toFloat())));
}
Fixed Fixed::operator*(const Fixed& other) const
{
    return (Fixed((toFloat() * other.toFloat()) ));
}
Fixed Fixed::operator/(const Fixed& other) const
{
    if (other.value == 0)
    {
        std::cout << "Division by zero " << std::endl ;
        return Fixed(0);
    }
    return (Fixed((toFloat() / other.toFloat()) ));
}
Fixed& Fixed::operator++()
{
    ++value;
    return *this;
}
Fixed& Fixed::operator--()
{
    --value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++value;
    return temp;
}
Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    ++value;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return ((a < b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return ((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return ((a < b) ? b : a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return ((a < b) ? b : a);
}

Fixed::~Fixed()
{
    
}