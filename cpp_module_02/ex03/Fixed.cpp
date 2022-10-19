/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:42:38 by qxia              #+#    #+#             */
/*   Updated: 2022/10/19 14:42:13 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bits = 8;

Fixed::Fixed(void):value(0){
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

Fixed::Fixed(const int i):value(i << Fixed::bits){ // left shift to point fixed
    return ;
}

Fixed::Fixed(const float f):value(roundf(f*(1 << Fixed::bits))){ 
    return ;
}

float Fixed::toFloat( void ) const{ //point fixed to flottante
    return ((float)this->getRawBits() / (1 << Fixed::bits));
}

int Fixed::toInt( void ) const{ //point fixed to entier
    return (this->getRawBits() / (1 << Fixed::bits));   
}

//operations d'incre et decrementation
Fixed &Fixed::operator++(){ // this->value ++ pas value++
    this->value ++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed temp = *this; //create un object temporaire
    value ++;
    return temp;
}

Fixed &Fixed::operator--(){ // this->value ++ pas value++
    this->value --;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed temp = *this; //create un object temporaire
    value --;
    return temp;
}

//comparaision
bool Fixed::operator>(Fixed const &rhs)const{
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs)const{
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs)const{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs)const{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs)const{
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs)const{
    return (this->getRawBits() != rhs.getRawBits());
}

//arithmetique
Fixed Fixed::operator+(Fixed const &rhs)const{
    return Fixed(this->value + rhs.getRawBits());
}

Fixed Fixed::operator-(Fixed const &rhs)const{
    return Fixed(this->value - rhs.getRawBits());
}

Fixed Fixed::operator*(Fixed const &rhs)const{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)const{
    return Fixed(this->toFloat() / rhs.toFloat());
}

//min et max
Fixed& Fixed::min(Fixed& num1, Fixed& num2){
    return (num1.getRawBits() <= num2.getRawBits() ? num1 : num2);
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2){
    return (num1.getRawBits() <= num2.getRawBits() ? num1 : num2);
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2){
    return (num1.getRawBits() >= num2.getRawBits() ? num1 : num2);
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2){
    return (num1.getRawBits() >= num2.getRawBits() ? num1 : num2);
}

std::ostream& operator << (std::ostream &os, Fixed const &obj){
    os << obj.toFloat();
    return os;
}
