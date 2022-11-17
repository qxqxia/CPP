/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:23:46 by qxia              #+#    #+#             */
/*   Updated: 2022/11/17 17:46:47 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void ft_element(T &x){
    std::cout << x << std::endl;
}

template<typename T>
void iter(T* array, T size, void ft_element<*array>(T const &x) ){
    for (T i = 0; i < size; i++){
        array[i];
    }
}

#endif