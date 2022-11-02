/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:43:18 by qxia              #+#    #+#             */
/*   Updated: 2022/11/01 11:11:51 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void):_type("default"){
    std::cout << "WrongAnimal constructor called.\n";
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
    std::cout << "Copy WrongAnimal constructor called.\n";
    *this = src;
    return ;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "WrongAnimal destructor called.\n";
    return ;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs){
    std::cout << "WrongAnimal: copy assignment operator called.\n";
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

std::string WrongAnimal::getType(void) const{
    return (this->_type);
}

void WrongAnimal::makeSound()const{
    std::cout << "WrongAnimal " << this->_type << " makes a sound.\n";
    return ;
}