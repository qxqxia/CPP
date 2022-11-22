/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:35 by qxia              #+#    #+#             */
/*   Updated: 2022/11/22 12:11:32 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm> //std::find
#include <vector>
#include <list>
//#include <typeinfo>

template <typename T>
int easyfind(T a, int val) {
    typename T<int>::iterator it = std::find(a.begin(), a.end(), val);
    if (it == a.end())
        throw std::exception();
    return (*it);
}

#endif





