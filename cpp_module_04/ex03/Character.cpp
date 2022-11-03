/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:13:57 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 22:51:46 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    std::cout << "Character constructor called.\n";
    for (int i = 0; i < Maxitems; i++)
    {
        this->_inventaire[i] = NULL;
    }
}

Character::Character(std::string name) : _name(name)
{
    std::cout << "Character " << this->_name << " constructor called.\n";
    for (int i = 0; i < Maxitems; i++)
    {
        this->_inventaire[i] = NULL;
    }
}

Character::Character(Character const &src)
{
    std::cout << "Character copy constructor called.\n";
    this->_name = src._name;
    for (int i = 0; i < Maxitems; i++)
    {
        if (src._inventaire[i])
            this->_inventaire[i] = src._inventaire[i];
    }
}

Character::~Character(void)
{
    std::cout << "Character destructor called.\n";
    for (int i = 0; i < Maxitems; i++)
    {
        if (this->_inventaire[i])
            delete[] this->_inventaire[i];
    }
}

Character &Character::operator=(Character const &rhs)
{
    std::cout << "Character copy assignment operator called.\n";
    if (this == &rhs)
        return *this;
    this->_name = rhs._name;
    for (int i = 0; i < Maxitems; i++)
    {
        if (rhs._inventaire[i])
            this->_inventaire[i] = rhs._inventaire[i];
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{
}