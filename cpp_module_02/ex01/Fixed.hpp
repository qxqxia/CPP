/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:17:31 by qxia              #+#    #+#             */
/*   Updated: 2022/10/16 13:13:00 by qxia             ###   ########.fr       */
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
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits(int const raw);
        int getRawBits( void ) const;
    private:
        int value;
        const static int bits;  
};

std::ostream& operator << (std::ostream &o, Fixed const &rhs); 

#endif