/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:32:28 by qxia              #+#    #+#             */
/*   Updated: 2022/11/18 15:08:42 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

class Array{
    public:
        Array(void);
        Array(unsigned int const &n);
        Array(Array const &Array);
        ~Array(void);

        Array& operator=(Array const &rhs);
        T& operator[](unsigned int index);
        unsigned int size()const;
        
    private:
        unsigned int    _size;
        
};

#endif