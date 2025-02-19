/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:00:28 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/18 18:33:29 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(5.0f, 10.0f);
    Point point(5.0f, 3.0f); // Inside

    if (bsp(a, b, c, point)) {
        std::cout << "Point is inside the triangle" << std::endl;
    } else {
        std::cout << "Point is outside the triangle" << std::endl;
    }


     Point a1(0.0f, 0.0f);
    Point b1(5.0f, 0.0f);
    Point c1(2.5f, 2.5f);
    Point point1(2.5f, 0.0f); // outside


    if (bsp(a1, b1, c1, point1)) {
        std::cout << "Point is inside the triangle" << std::endl;
    } else {
        std::cout << "Point is outside the triangle" << std::endl;
    }

    return 0;
}