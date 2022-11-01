/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:44:39 by qxia              #+#    #+#             */
/*   Updated: 2022/11/01 11:10:59 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(){
    this->_type = "Dog";
    std::cout << "Dog constructor called.\n";
    return ;
}

Dog::Dog(Dog const &src) : Animal(src){
    std::cout << "Dog: copy constructor called.\n";
    *this = src;
    return ;
}

Dog& Dog::operator=(Dog const &rhs){
    std::cout << "Dog: copy assignment operator called.\n";
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

Dog::~Dog(void){
    std::cout << "Dog destructor called.\n";
    return ;
}

void Dog::makeSound()const{
    std::cout << this->_type << " barks.\n";
    return ;
}