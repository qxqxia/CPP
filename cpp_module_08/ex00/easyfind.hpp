/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:35 by qxia              #+#    #+#             */
/*   Updated: 2022/11/21 17:18:17 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm> //std::find


template<typename T>
easyfind<T container, int Tofind> {
    typename T<int>::iterator it;

    it = std::find(container.begin(), container.end(), Tofind);
    if (i == container.end())
        throw std::exception();
    return (*i);
}





