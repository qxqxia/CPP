/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:15:58 by qxia              #+#    #+#             */
/*   Updated: 2022/11/04 11:21:13 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void):_type("default"){
    std::cout << "Animal constructor called.\n";
}

Animal::Animal(Animal const &src){
    std::cout << "Copy Animal constructor called.\n";
    *this = src;
}

Animal::~Animal(void){
    std::cout << "Animal destructor called.\n";
}

Animal& Animal::operator=(Animal const &rhs){
    std::cout << "animal: copy assignment operator called.\n";
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

std::string Animal::getType(void) const{
    return (this->_type);
}

void Animal::makeSound()const{
    std::cout << "Animal " << this->_type << " makes a sound.\n";
    return ;
}