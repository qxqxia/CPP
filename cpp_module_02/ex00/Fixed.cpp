/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:25:51 by qinxia            #+#    #+#             */
/*   Updated: 2022/11/01 11:07:55 by qxia             ###   ########.fr       */
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
    std::cout << "getRawBits member function called\n";
    return this->value;
}

void Fixed::setRawBits(int const raw){
    this->value = raw;
    return ;
}