/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:24:33 by qxia              #+#    #+#             */
/*   Updated: 2022/11/16 16:30:34 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct Data{
    char        c;
    int         i;
    float       f;
    double      d;
    std::string s;
};

#endif