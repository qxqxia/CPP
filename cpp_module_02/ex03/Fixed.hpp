/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:42:46 by qxia              #+#    #+#             */
/*   Updated: 2022/10/20 13:28:19 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    public:
        Fixed(void);
        Fixed(const int i); 
        Fixed(const float f);
        Fixed(Fixed const &src); 
        ~Fixed(void);
        
        Fixed& operator=(Fixed const &rhs); 
       
        bool operator>(Fixed const &rhs)const;
        bool operator<(Fixed const &rhs)const;
        bool operator>=(Fixed const &rhs)const;
        bool operator<=(Fixed const &rhs)const;
        bool operator==(Fixed const &rhs)const;
        bool operator!=(Fixed const &rhs)const;
        
        Fixed operator+(Fixed const &rhs)const;
        Fixed operator-(Fixed const &rhs)const;
        Fixed operator*(Fixed const &rhs)const;
        Fixed operator/(Fixed const &rhs)const;
        
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        
        static Fixed& min(Fixed& num1, Fixed& num2);//global variable/function
        const static Fixed& min(const Fixed& num1, const Fixed& num2);//don't have this
        static Fixed& max(Fixed& num1, Fixed& num2);
        const static Fixed& max(const Fixed& num1, const Fixed& num2);
        
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits(int const raw);
        
    private:
        int value;
        const static int bits;
};

std::ostream& operator << (std::ostream &os, Fixed const &obj); 

#endif