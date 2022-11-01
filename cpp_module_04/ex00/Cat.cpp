/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:35:20 by qxia              #+#    #+#             */
/*   Updated: 2022/11/01 11:10:52 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(){
    std::cout << "Cat constructor called.\n";
    this->_type = "Cat";
    return ;
}

Cat::Cat(Cat const &src) : Animal(src){
    std::cout << "Cat: copy constructor called.\n";
    *this = src;
    return ;
}

Cat::~Cat(void){
    std::cout << this->_type << " destructor called.\n";
    return ;
}

Cat& Cat::operator=(Cat const &rhs){
    std::cout << "Cat: copr assignment operator called.\n";
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

void Cat::makeSound()const{
    std::cout << this->_type << " makes no sound.\n";
    return ;
}