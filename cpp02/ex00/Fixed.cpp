/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:29:52 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/16 12:20:04 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other): value(other.value)
{
    std::cout << "copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& other)
{
    if(this != &other)
    {
        value = other.value;   
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}
void Fixed::setRawBits( int const raw )
{
    std::cout << "getRawBits member function called" << std::endl;
    value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
