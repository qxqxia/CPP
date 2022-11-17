/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:23:46 by qxia              #+#    #+#             */
/*   Updated: 2022/11/17 22:52:48 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void ft_var(T const &var)
{
    std::cout << var << std::endl;
}

template <typename T>
void iter(T *array, T size, void f(T const &a))
{
    for (T i = 0; i < size; i++)
    {
        f(array[i]);
    }
}

#endif