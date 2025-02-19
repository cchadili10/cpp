/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:00:34 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/18 18:32:10 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"



Point::Point():x(0), y(0){}
Point::Point(float xf , float yf):x(xf), y(yf){}
Point::Point(const Point& other):x(other.x), y(other.y){}

Point& Point::operator = (const Point& other)
{
   (void)other;
    return *this;
}
Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}



Point::~Point(){}