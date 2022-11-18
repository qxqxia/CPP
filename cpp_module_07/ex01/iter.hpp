/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:23:46 by qxia              #+#    #+#             */
/*   Updated: 2022/11/18 10:27:30 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, T size, void f(T const &a))
{
    for (T i = 0; i < size; i++)
    {
        f(array[i]);
    }
}

template <typename T>
void ft_var(T const &var)
{
    std::cout << var << std::endl;
}
#endif