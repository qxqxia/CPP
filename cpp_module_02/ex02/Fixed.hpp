/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:42:46 by qxia              #+#    #+#             */
/*   Updated: 2022/10/17 16:41:35 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    public:
        Fixed(void);
        Fixed(const int i);
        Fixed(const float f);
        Fixed(Fixed const &src); //cope
        
        Fixed& operator=(Fixed const &rhs)const; //operator overload
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
        Fixed operator++() //
        
        static Fixed& min(Fixed& num1, Fixed& num2);
        const static Fixed& min(const Fixed& num1, const Fixed& num2);
        static Fixed& max(Fixed& num1, Fixed& num2);
        const static Fixed& max(const Fixed& num1, const Fixed& num2);
        
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits(int const raw);
        ~Fixed(void);
    private:
        int value;
        const static int bits;
};

std::ostream& operator << (std::ostream &o, Fixed const &in);

#endif