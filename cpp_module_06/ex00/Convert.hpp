/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:28:21 by qxia              #+#    #+#             */
/*   Updated: 2022/11/14 17:04:19 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Convert{
    public:
        Convert(void);
        Convert(std::string str);
        Convert(Convert const &src);
        ~Convert(void);

        Convert& operator=(Convert const &rhs);

        operator char(void);
        operator int(void);
        operator float(void);
        operator double(void);

        std::string getStr(void)const;

    private:
        std::string _str;
};

#endif