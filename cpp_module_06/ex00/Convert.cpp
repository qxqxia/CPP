/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:19:36 by qinxia            #+#    #+#             */
/*   Updated: 2022/11/15 23:15:51 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) {}
Convert::Convert(std::string str) : _str(str) {}

Convert::Convert(Convert const &src)
{
    *this = src;
}

Convert::~Convert(void) {}

Convert &Convert::operator=(Convert const &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_str = rhs._str;
    return (*this);
}

Convert::operator char(void)
{
    std::string str = this->getStr();
    char *pEnd = NULL;
    long double c = 0;

    c = std::strtold(str.c_str(), &pEnd);
    if (str == pEnd || pEnd[0] != '\0')
        throw TypeErrorException();
    if (c < 32 || c > 126)
        throw PrintErrorException();
    return (c);
}

Convert::operator int(void)
{
    std::string str = this->getStr();
    char *pEnd = NULL;
    long double i = 0;

    i = std::strtold(str.c_str(), &pEnd);
    if (str == pEnd || pEnd[0] != '\0')
        throw TypeErrorException();
    if (i < INT_MIN || i > INT_MAX)
        throw PrintErrorException();
    return (i);
}

Convert::operator float(void)
{
    std::string str = this->getStr();
    char *pEnd = NULL;
    long double f = 0;

    f = std::strtold(str.c_str(), &pEnd);
    if (str == pEnd || pEnd[0] != '\0')
        throw TypeErrorException();
    if (f < FLT_MIN || f > FLT_MAX)
        return (f);
}

Convert::operator double(void)
{
    std::string str = this->getStr();
    char *pEnd = NULL;
    long double d = 0;

    d = std::strtold(str.c_str(), &pEnd);
    if (str == pEnd || pEnd[0] != '\0')
        throw TypeErrorException();
    return (d);
}

std::string Convert::getStr(void) const
{
    return (this->_str);
}

void Convert::printResult(void)
{
    std::cout << "char: ";
    try
    {
        char c = static_cast<char>(*this);
        std::cout << c << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "int: ";
    try
    {
        int i = static_cast<int>(*this);
        std::cout << i << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "float: ";
    try
    {
        float f = static_cast<float>(*this);
        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "double: ";
    try
    {
        double d = static_cast<double>(*this);
        std::cout << d << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

const char *Convert::TypeErrorException::what() const throw()
{
    return ("Invalid syntax");
}

const char *Convert::PrintErrorException::what() const throw()
{
    return ("Not displayable");
}