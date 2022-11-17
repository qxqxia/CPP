/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:13:46 by qxia              #+#    #+#             */
/*   Updated: 2022/11/17 16:50:19 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
T const & max(T const &x, T const &y){
    return (x>y ? x : y);
}

template<typename T>
T const & min(T const &x, T const &y){
    return (x<y ? x : y);
}

template<typename T>
void swap(T &x, T &y){ //shouble be &x &y why
    T tmp = x;
    x = y;
    y = tmp;
    
}

#endif