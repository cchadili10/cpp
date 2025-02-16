/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:29:54 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/16 12:14:42 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

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
    ~Fixed();
};






#endif