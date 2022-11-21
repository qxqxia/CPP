/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:32:28 by qxia              #+#    #+#             */
/*   Updated: 2022/11/21 10:54:15 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>

template<typename T>

class Array{
    public:
        Array(void);
        Array(unsigned int const &n);
        Array(Array const &src);
        ~Array(void);

        Array& operator=(Array const &rhs);
        T& operator[](unsigned int index);
        unsigned int size(void)const;

    private:
        unsigned int    _size;
        T               *_array;
}; 

#include "Array.tpp"

#endif