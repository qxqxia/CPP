/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:06:43 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 15:35:38 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){
    std::cout << "AMateria constructor called.\n";
}

AMateria::AMateria(std::string const & type) : _type(type){
    std::cout << "AMateria " << this->_type << " constructor called.\n";
}

AMateria::AMateria(AMateria const &src){
    std::cout << "AMateria copy constructor called.\n";
    *this = src;
}

AMateria::~AMateria(void){
    std::cout << "AMateria destructor called.\n";
}

AMateria& AMateria::operator=(AMateria const &rhs){
    std::cout << "AMateria copy assignment operator called.\n";
    this->_type = rhs._type;
    return (*this);
}

std::string const& AMateria::getType()const{
    return (this->_type);
}

void AMateria::use(ICharacter& target){
    return ;
}