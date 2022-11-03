/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:13:13 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 15:42:56 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure"){
    std::cout << "Cure constructor called.\n";
}

Cure::Cure(Cure const &src) : AMateria(src){
    std::cout << "Cure copy constructor called.\n";
    *this = src;
}

Cure::~Cure(void){
    std::cout << "Cure destructor called.\n";
}

Cure& Cure::operator=(Cure const  &rhs){
    std::cout << "Cure copy assignment operator called.\n";
    this->_type = rhs._type;
    return (*this);
}

Cure* Cure::clone() const{
    
}

void Cure::use(ICharacter& target){
    
}