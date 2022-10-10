/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:24:32 by qxia              #+#    #+#             */
/*   Updated: 2022/10/10 15:15:39 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& club):name(name),_club(club){
    return ;
}

HumanA::~HumanA(void){
    return ;
}

void HumanA::attack(void){
    std::cout << this->name << " attacks with their " << this->_club.getType() << std::endl; 
}