/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:03:52 by qxia              #+#    #+#             */
/*   Updated: 2022/10/18 17:08:24 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>

class Point{
    public:
        Point(void);
        Point(Fixed const x, Fixed const y);
        Point(Point const &src);
        ~Point(void);
        Point& operator=(Point const &rhs);
        Fixed getX(void) const;
        Fixed getY(void) const;
    private:
        Fixed const _x;
        Fixed const _y;
        
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif