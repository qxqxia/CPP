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

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource constructor called.\n";
    for (int i = 0; i < 4; i++)
        this->_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    std::cout << "MareriaSource copy constructor called.\n";
    for (int i = 0; i < 4; i++)
    {
        if (src._source[i])
            this->_source[i] = src._source[i]->clone();
    }
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called.\n";
    for (int i = 0; i < 4; i++)
    {
        if (this->_source[i])
            delete[] this->_source[i];
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    std::cout << "MateriaSource copy assignment operator called.\n";
    for (int i = 0; i < 4; i++)
    {
        if (rhs._source[i])
            this->_source[i] = rhs._source[i]->clone();
    }
}

void MateriaSource::learnMateria(AMateria *)
{
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
}