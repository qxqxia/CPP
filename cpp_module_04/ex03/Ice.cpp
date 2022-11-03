/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:13:18 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 15:43:22 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("Ice"){
    std::cout << "Ice constructor called.\n";
}

Ice::Ice(Ice const &src) : AMateria(src){
    std::cout << "Ice copy constructor called.\n";
    *this = src;
}

Ice::~Ice(void){
    std::cout << "Ice destructor called.\n";
}

Ice& Ice::operator=(Ice const  &rhs){
    std::cout << "Ice copy assignment operator called.\n";
    this->_type = rhs._type;
    return (*this);
}

Ice* Ice::clone() const{
    
}

void Ice::use(ICharacter& target){
    
}