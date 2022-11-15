/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:46:47 by qxia              #+#    #+#             */
/*   Updated: 2022/11/15 14:40:15 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void){}
        
Convert::Convert(std::string str) : _str(str){}
        
Convert::Convert(Convert const &src){
    *this = src;
}
        
Convert::~Convert(void){}

        
Convert& Convert::operator=(Convert const &rhs){
    if (this == &rhs)
        return (*this);
    this->_str = rhs._str;
    return (*this);
}

        
std::string Convert::getStr(void)const{
    return (this->_str);
}

bool Convert::checkStrType(){
    if (!checkChar() && !checkInt() && !checkFloat() !checkDouble())
        return false;
    else
        return true;
}

bool Convert::checkChar(){
    std::string str = this->getStr();
    if (str.length() == 1){
        
    }
}
          
bool Convert::checkInt(){
    
    
}
        
bool Convert::checkFloat(){
    
}
           
bool Convert::checkDouble(){
    
}

void Convert::convertToInt(){
    
}
        
void Convert::convertToFloat(){
    
}
        
void Convert::convertToChar(){
    
}
        
void Convert::convertToDouble(){
    
}