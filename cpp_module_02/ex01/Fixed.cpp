/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:17:26 by qxia              #+#    #+#             */
/*   Updated: 2022/11/01 11:08:23 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bits = 8;

Fixed::Fixed(void):value(0){
    std::cout << "Default constructor called\n";
    return ;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called\n";
    return ;
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constrcutor called\n";
    *this = src;
    return ;
}

Fixed& Fixed::operator=(Fixed const &rhs){
    std::cout << "Copy assignment operator called\n";
    if (this == &rhs)
        return *this;
    this->value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void)const{
    return this->value;
}

void Fixed::setRawBits(int const raw){
    this->value = raw;
    return ;
}

Fixed::Fixed(const int i):value(i << Fixed::bits){ // left shift 
    std::cout << "Int constructor called\n";
    return ;
}

Fixed::Fixed(const float f):value(roundf(f*(1 << Fixed::bits))){ 
    std::cout << "Float constructor called\n";
    return ;
}

float Fixed::toFloat( void ) const{
    return ((float)this->getRawBits() / (1 << Fixed::bits));
}

int Fixed::toInt( void ) const{
    return (this->getRawBits() / (1 << Fixed::bits));   
}

std::ostream& operator << (std::ostream &os, Fixed const &obj){
    os << obj.toFloat(); 
    return os;
}