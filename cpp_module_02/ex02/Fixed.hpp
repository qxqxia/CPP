/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:42:46 by qxia              #+#    #+#             */
/*   Updated: 2022/10/21 16:55:07 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    public:
        Fixed(void);
        Fixed(const int i); //function overloading
        Fixed(const float f);
        Fixed(Fixed const &src); //cope
        ~Fixed(void);
        
        Fixed& operator=(Fixed const &rhs); //operator overload copy assignment
       
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
        
        Fixed& operator++();//++i 前增量没有形参，而且是引用返回
        Fixed operator++(int); //i++ 放上一个整数形参，就是后增量运行符，它是值返回
        Fixed& operator--();
        Fixed operator--(int);
        
        static Fixed& min(Fixed& num1, Fixed& num2);//global variable/function
        const static Fixed& min(const Fixed& num1, const Fixed& num2);
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

std::ostream& operator << (std::ostream &os, Fixed const &obj); //insertion operator

#endif