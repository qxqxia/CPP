/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:13:46 by qxia              #+#    #+#             */
/*   Updated: 2022/11/17 22:12:49 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T const &max(T const &x, T const &y)
{
    return (x > y ? x : y);
}

template <typename T>
T const &min(T const &x, T const &y)
{
    return (x < y ? x : y);
}

template <typename T>
void swap(T &x, T &y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

#endif