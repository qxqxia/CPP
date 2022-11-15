/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:46:47 by qxia              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/11/15 16:39:16 by qxia             ###   ########.fr       */
=======
/*   Updated: 2022/11/15 14:40:15 by qxia             ###   ########.fr       */
>>>>>>> c9558fd838e254ee55846983aa2b55fc3fb148d3
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void){}
<<<<<<< HEAD
       
Convert::Convert(std::string str) : _str(str){}
      
Convert::Convert(Convert const &src){
    *this = src;
}
   
=======
        
Convert::Convert(std::string str) : _str(str){}
        
Convert::Convert(Convert const &src){
    *this = src;
}
        
>>>>>>> c9558fd838e254ee55846983aa2b55fc3fb148d3
Convert::~Convert(void){}

Convert& Convert::operator=(Convert const &rhs){
<<<<<<< HEAD
    if (this = &rhs)
=======
    if (this == &rhs)
>>>>>>> c9558fd838e254ee55846983aa2b55fc3fb148d3
        return (*this);
    this->_str = rhs._str;
    return (*this);
}

<<<<<<< HEAD
Convert::operator char(void){
    std::string str = this->getStr();
    char* pEnd = NULL;
    long double c = 0;

    c = std::strtold(str, &pEnd);
    if (str == pEnd || pEnd[0] != '\0')
        throw TypeErrorException();
    return (c);
}
      
Convert::operator int(void){
    std::string str = this->getStr();
    char* pEnd = NULL;
    long double i = 0;

    i = std::strtold(str, &pEnd);
    if (str == pEnd || pEnd[0] != '\0')
        throw TypeErrorException();
    return (i);
}
       
Convert::operator float(void){
    std::string str = this->getStr();
    char* pEnd = NULL;
    long double f = 0;

    f = std::strtold(str, &pEnd);
    if (str == pEnd || pEnd[0] != '\0')
        throw TypeErrorException();
=======
        
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
>>>>>>> c9558fd838e254ee55846983aa2b55fc3fb148d3
    
    return (f);
}
<<<<<<< HEAD
      
Convert::operator double(void){
    std::string str = this->getStr();
    char* pEnd = NULL;
    long double d = 0;
    
     d = std::strtold(str, &pEnd);
     if (str == pEnd || pEnd[0] != '\0')
        throw TypeErrorException();
        
     return (d);
}
      
std::string Convert::getStr(void)const{
    return (this->_str);
}

void printResult(void){
    std::cout << "char: ";
    try{
        char c = static_cast<char>(*this);
        std::cout << c << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "int: ";
    try{
        int i = static_cast<int>(*this);
        std::cout << i << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "float: ";
    try{
        float f = static_cast<float>(*this);
        std::cout << f << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "double: ";
    try{
        double d = static_cast<double>(*this);
        std::cout << d << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
}

const char *Convert::TypeErrorException::what() const throw(){
    return ("Invalid syntax");
}
=======
        
void Convert::convertToChar(){
    
}
        
void Convert::convertToDouble(){
    
}
>>>>>>> c9558fd838e254ee55846983aa2b55fc3fb148d3
