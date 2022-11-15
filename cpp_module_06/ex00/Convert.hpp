/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:28:21 by qxia              #+#    #+#             */
/*   Updated: 2022/11/15 16:39:22 by qxia             ###   ########.fr       */
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
        void printResult(void);

        class TypeErrorException : public std::exception{
            const char *what() const throw();
        };
    private:
        std::string _str;
};

#endif