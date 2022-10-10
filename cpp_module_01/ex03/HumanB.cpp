/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:25:02 by qxia              #+#    #+#             */
/*   Updated: 2022/10/10 15:17:08 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):name(name){
    this->_club = NULL;
    return ;
}

HumanB::~HumanB(void){
    return ;
}

void HumanB::setWeapon(Weapon& club){
    this->_club = &club;
}

void HumanB::attack(void){
    if (this->_club){
        std::cout << this->name << " attacks with their " << this->_club->getType() << std::endl;
    }
    return ;
}