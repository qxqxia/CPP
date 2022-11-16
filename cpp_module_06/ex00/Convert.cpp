/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:19:36 by qinxia            #+#    #+#             */
/*   Updated: 2022/11/16 14:31:16 by qxia             ###   ########.fr       */
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

bool	isNanOrInf(std::string str) {
	if (!str.compare("nan") || !str.compare("nanf") || \
		!str.compare("+nan") || !str.compare("+nanf") || \
		!str.compare("-nan") || !str.compare("-nanf") || \
		!str.compare("inf") || !str.compare("inff") || \
		!str.compare("-inf") || !str.compare("+inf") || \
		!str.compare("-inff") || !str.compare("+inff")){
		return (true);
	}
	return (false);
}

Convert::operator char(void)
{
    std::string str = this->getStr();
    char *pEnd = NULL;
    long double s = 0;

    if (isNanOrInf(str) == true)
		throw TypeErrorException();
    s = std::strtold(str.c_str(), &pEnd);
    if (str == pEnd)
        throw TypeErrorException();
    if (pEnd[0] != '\0' && pEnd[0] != 'f')
        throw TypeErrorException();
    if (pEnd[0] == 'f' && pEnd[1] != '\0')
        throw TypeErrorException();
    if (s < 32 || s > 126)
        throw PrintErrorException();
    return (s);
}

Convert::operator int(void)
{
    std::string str = this->getStr();
    char *pEnd = NULL;
    long double s = 0;

    if (isNanOrInf(str) == true)
		throw TypeErrorException();
    s = std::strtold(str.c_str(), &pEnd);
     if (str == pEnd)
        throw TypeErrorException();
    if (pEnd[0] != '\0' && pEnd[0] != 'f')
        throw TypeErrorException();
    if (pEnd[0] == 'f' && pEnd[1] != '\0')
        throw TypeErrorException();
    if (s < INT_MIN || s > INT_MAX)
        throw PrintErrorException();
    return (s);
}

Convert::operator float(void)
{
    std::string str = this->getStr();
    char *pEnd = NULL;
    long double s = 0;

    if (isNanOrInf(str) == true)
		return (std::strtod(this->getStr().c_str(), &pEnd));
    s = std::strtold(str.c_str(), &pEnd);
    if (str == pEnd || (pEnd[0] != '\0' && pEnd[0] != 'f') \
    || (pEnd[0] = 'f' && pEnd[1] != '\0'))
        throw TypeErrorException();
    return (s);
}

Convert::operator double(void)
{
    std::string str = this->getStr();
    char *pEnd = NULL;
    long double s = 0;

    if (isNanOrInf(str) == true)
		return (std::strtod(this->getStr().c_str(), &pEnd));
    s = std::strtold(str.c_str(), &pEnd);
    if (str == pEnd || (pEnd[0] != '\0' && pEnd[0] != 'f') \
    || (pEnd[0] = 'f' && pEnd[1] != '\0'))
        throw TypeErrorException();
    return (s);
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
        std::cout << "'" << c << "'" << std::endl;
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
        std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(1);
        std::cout << f << "f" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "double: ";
    try
    {
        double d = static_cast<double>(*this);
        std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(1);
        std::cout << d << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

const char *Convert::TypeErrorException::what() const throw()
{
    return ("impossible");
}

const char *Convert::PrintErrorException::what() const throw()
{
    return ("Not displayable");
}