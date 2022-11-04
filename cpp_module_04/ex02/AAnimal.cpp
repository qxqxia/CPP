/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:56:48 by qxia              #+#    #+#             */
/*   Updated: 2022/11/02 15:57:08 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void):_type("default"){
    std::cout << "AAnimal constructor called.\n";
}

AAnimal::AAnimal(AAnimal const &src){
    std::cout << "AAnimal copy constructor called.\n";
    *this = src;
}

AAnimal::~AAnimal(void){
    std::cout << "AAnimal destructor called.\n";
}

AAnimal& AAnimal::operator=(AAnimal const &rhs){
    std::cout << "AAnimal copy assignment operator called.\n";
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

std::string AAnimal::getType(void) const{
    return (this->_type);
}

void AAnimal::makeSound()const{
    std::cout << "AAnimal " << this->_type << " makes a sound.\n";
    return ;
}

void AAnimal::addIdea(std::string idea){
    (void)idea;
    return ;
}

void AAnimal::printIdeas(void)const{
    return ;
}