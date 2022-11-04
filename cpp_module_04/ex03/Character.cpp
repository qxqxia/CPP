/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:13:57 by qxia              #+#    #+#             */
/*   Updated: 2022/11/04 14:20:05 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void){
    std::cout << "Character constructor called.\n";
    for (int i = 0; i < Maxitems; i++){
        this->_inventaire[i] = NULL;
    }
}

Character::Character(std::string name) : _name(name){
    std::cout << "Character " << this->_name << " constructor called.\n";
    for (int i = 0; i < Maxitems; i++){
        this->_inventaire[i] = NULL;
    }
}

Character::Character(Character const &src){
    std::cout << "Character copy constructor called.\n";
    this->_name = src._name;
    for (int i = 0; i < Maxitems; i++){
        if (src._inventaire[i])
            this->_inventaire[i] = src._inventaire[i];
    }
}

Character::~Character(void){
    std::cout << "Character destructor called.\n";
    for (int i = 0; i < Maxitems; i++){
        if (this->_inventaire[i]){
            delete this->_inventaire[i];
            this->_inventaire[i] = NULL;
        }
    }
}

Character &Character::operator=(Character const &rhs){
    std::cout << "Character copy assignment operator called.\n";
    if (this == &rhs)
        return *this;
    this->_name = rhs._name;
    for (int i = 0; i < Maxitems; i++){
        if (this->_inventaire[i])
            delete this->_inventaire[i];
        if (rhs._inventaire[i])
            this->_inventaire[i] = rhs._inventaire[i];
    }
    return (*this);
}

std::string const &Character::getName() const{
    return (this->_name);
}

void Character::equip(AMateria* m){
    if (!m)
        std::cout << "AMateria " << m << " doesn't exit.\n";
    for (int i = 0; i < Maxitems; i++){
        if (!this->_inventaire[i]){
            this->_inventaire[i] = m; //equip a AMateria
            return ;
        }
    }
    if (this->_inventaire[3])
        std::cout << "Inventaire already has 4, no more place.\n";
}

void Character::unequip(int idx){
    if (idx < 0 || idx > Maxitems)
        std::cout << "Wrong idx.\n";
    if (this->_inventaire[idx])
        this->_inventaire[idx] = NULL;
}

void Character::use(int idx, ICharacter &target){
    if (idx < 0 || idx >= Maxitems)
        std::cout << "Wrong idx.\n";
    else{
        if (this->_inventaire[idx])
            this->_inventaire[idx]->use(target);
        else
            std::cout << "ERROR: no idx.\n";
    }
}