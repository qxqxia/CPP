/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:25:46 by qinxia            #+#    #+#             */
/*   Updated: 2022/10/18 10:45:01 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
    public:
        Fixed(void);
        Fixed(Fixed const &src); //function overload
        ~Fixed(void);
        Fixed& operator=(Fixed const &rhs);
        void setRawBits(int const raw);
        int getRawBits( void ) const;
    private:
        int value;
        const static int bits;
};

#endif
