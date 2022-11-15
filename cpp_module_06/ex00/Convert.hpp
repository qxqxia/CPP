/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:18:55 by qinxia            #+#    #+#             */
/*   Updated: 2022/11/15 23:15:55 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <locale>
#include <string>
#include <limits>
#include <cfloat>

class Convert
{
public:
    Convert(void);
    Convert(std::string str);
    Convert(Convert const &src);
    ~Convert(void);

    Convert &operator=(Convert const &rhs);

    std::string getStr(void) const;
    operator char(void);
    operator int(void);
    operator float(void);
    operator double(void);
    void printResult(void);

    class TypeErrorException : public std::exception
    {
        const char *what() const throw();
    };
    class PrintErrorException : public std::exception
    {
        const char *what() const throw();
    };

private:
    std::string _str;
};

#endif