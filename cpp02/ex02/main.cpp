/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:35:28 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/17 14:33:45 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed const c( Fixed( 5 ) / Fixed( 2 ) );
Fixed const f( Fixed( 5 ) - Fixed( 2 ) );
std::cout << b << std::endl;
std::cout << c << std::endl;
std::cout << f << std::endl;
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}