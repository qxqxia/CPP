/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:42:38 by qxia              #+#    #+#             */
/*   Updated: 2022/10/17 17:16:06 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bits = 8;

Fixed::Fixed(void):valu(0){
        return ;
}

Fixed::~Fixed(void){
    return ;
}

Fixed::Fixed(Fixed const &src){
    *this = src;
    return ;
}

Fixed& Fixed::operator=(Fixed const &rhs){
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
    return ;
}

Fixed::Fixed(const float f):value(roundf(f*(1 << Fixed::bits))){ 
    return ;
}

float Fixed::toFloat( void ) const{
    return ((float)this->getRawBits() / (1 << Fixed::bits));
}

int Fixed::toInt( void ) const{
    return (this->getRawBits() / (1 << Fixed::bits));   
}

Fixed &Fixed::operator++(){
    value ++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp(*this); //create un object temporaire
    value ++;
    return temp;
}