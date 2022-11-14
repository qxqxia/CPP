/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:46:47 by qxia              #+#    #+#             */
/*   Updated: 2022/11/14 16:57:39 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void){
    std::cout << "Convert constructor called.\n";
}
        
Convert::Convert(std::string str) : _str(str){
    std::cout << "Convert avec parametre constructor called.\n";
}
        
Convert::Convert(Convert const &src){
    std::cout << "Convert copy constructor called.\n";
    *this = src;
}
        
Convert::~Convert(void){
    std::cout << "Convert destructor called.\n";
}

        
Convert& Convert::operator=(Convert const &rhs){
    std::cout << "Convert copy assignment operator called.\n";
    if (this == &rhs)
        return (*this);
    this->_str = rhs._str;
    return (*this);
}

Convert::operator char(void){
    
}
        
Convert::operator int(void){
    
}
        
Convert::operator float(void){
    
}
        
Convert::operator double(void){
    
}

        
std::string Convert::getStr(void)const{
    return (this->_str);
}