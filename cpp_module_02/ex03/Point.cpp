/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:03:47 by qxia              #+#    #+#             */
/*   Updated: 2022/10/21 11:23:30 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):_x(0), _y(0){
    return ;
}

Point::Point(Fixed const x, Fixed const y):_x(x), _y(y){
    return ;
}

Point::Point(Point const &src){
    *this = src;
    return ;
}

Point& Point::operator=(Point const &rhs){
    (Fixed &)this->_x = rhs._x;
    (Fixed &)this->_y = rhs._y;
    return *this; 
}

Point::~Point(void){
    return ;
}

Fixed Point::getX(void)const{
    return this->_x;
}

Fixed Point::getY(void)const{
    return this->_y;
}