/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:32:28 by qxia              #+#    #+#             */
/*   Updated: 2022/11/17 16:33:28 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

class Array{
    public:
        Array<T>(T const &content) {
            
        }
        Array<T>(Array<T> const &Array){
            
        }
        ~Array<T>(void){
            
        }
    private:
        T*          _content;
        Array<T>*    _next;
};

#endif