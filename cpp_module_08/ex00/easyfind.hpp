/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:35 by qxia              #+#    #+#             */
/*   Updated: 2022/11/23 12:16:23 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm> //std::find
#include <vector>
#include <list>

template<typename T>
int easyfind(T a, int val) {
    typename T::iterator i = std::find(a.begin(), a.end(), val);
    if (i == a.end())
        throw std::exception();
    return (*i);
}

#endif





