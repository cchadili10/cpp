/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:00:17 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/18 18:33:16 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Function to calculate the cross product of two vectors defined by three points
Fixed cross_product(const Point& a, const Point& b, const Point& c) {
    return (b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed cp1 = cross_product(a, b, point);
    Fixed cp2 = cross_product(b, c, point);
    Fixed cp3 = cross_product(c, a, point);

    // Check if the point lies on the same side of all three edges, EXCLUDING edges
    return ((cp1 > 0 && cp2 > 0 && cp3 > 0) || (cp1 < 0 && cp2 < 0 && cp3 < 0));
}
