/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:00:38 by hchadili          #+#    #+#             */
/*   Updated: 2025/02/18 18:32:42 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
    
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(float xf , float yf);
    Point(const Point& other);
    Point& operator = (const Point& other);
    Fixed getX() const;
    Fixed getY() const;
    ~Point();
};

Fixed cross_product(const Point& a, const Point& b, const Point& c);
bool bsp( Point const a, Point const b, Point const c, Point const point);



#endif