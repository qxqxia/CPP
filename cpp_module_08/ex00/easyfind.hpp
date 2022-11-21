/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:35 by qxia              #+#    #+#             */
/*   Updated: 2022/11/21 16:53:23 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>


template<typename T>

easyfind<T container, int Tofind> {
    T<int>::iterator i;
    for (i = container.begin(); i != container.end(); ++i){
        if (i !== container.end())
            return (*i);
        else {
            throw std::exception();
        }
    }
}
