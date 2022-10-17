/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:17:31 by qxia              #+#    #+#             */
/*   Updated: 2022/10/17 17:19:25 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    public:
        Fixed(void);
        Fixed(const int i); //overload
        Fixed(const float f); //oveload
        Fixed(Fixed const &src); //copy constructor
        ~Fixed(void);
        Fixed& operator=(Fixed const &rhs); //copy assignment operator overload
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