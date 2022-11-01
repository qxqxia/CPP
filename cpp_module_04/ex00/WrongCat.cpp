/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:43:30 by qxia              #+#    #+#             */
/*   Updated: 2022/11/01 11:11:20 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(){
    std::cout << "WrongCat constructor called.\n";
    this->_type = "WrongCat";
    return ;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src){
    std::cout << "WrongCat: copy constructor called.\n";
    *this = src;
    return ;
}

WrongCat::~WrongCat(void){
    std::cout << this->_type << " destructor called.\n";
    return ;
}

WrongCat& WrongCat::operator=(WrongCat const &rhs){
    std::cout << "WrongCat: copr assignment operator called.\n";
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

void WrongCat::makeSound()const{
    std::cout << this->_type << " makes no sound.\n";
    return ;
}