/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:35:04 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 11:35:30 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void){
    std::cout << "MateriaSource constructor called.\n";
    for (int i = 0; i < Maxnbr; i++)
        this->_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src){
    std::cout << "MareriaSource copy constructor called.\n";
    for (int i = 0; i < Maxnbr; i++){
        if (src._source[i])
            this->_source[i] = src._source[i]->clone();
    }
}

MateriaSource::~MateriaSource(void){
    std::cout << "MateriaSource destructor called.\n";
    for (int i = 0; i < Maxnbr; i++){
        if (this->_source[i]){
            delete this->_source[i];
            this->_source[i] = NULL;
        }
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs){
    std::cout << "MateriaSource copy assignment operator called.\n";
    if (this == &rhs)
        return *this;
    for (int i = 0; i < Maxnbr; i++){
        if (this->_source[i])
            delete this->_source[i];
        if (rhs._source[i])
            this->_source[i] = rhs._source[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m){
    if (!m)
        std::cout << "AMateria " << m << " doesn't exit.\n";
    for (int i = 0; i < Maxnbr; i++){
        if (!this->_source[i]){
            this->_source[i] = m; 
            return ;
        }
    }
    delete m;
    if (this->_source[3])
        std::cout << "Source already has 4, no more place.\n";
}

AMateria *MateriaSource::createMateria(std::string const &type){
    for(int i = 0; i < Maxnbr; i++) {
        if (this->_source[i] && this->_source[i]->getType() == type)
            return (this->_source[i]->clone());
    }
    if (type.compare("ice") == 0)
        return (new Ice());
    if (type.compare("cure") == 0)
        return (new Ice());
    return (0);
}