/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:23:57 by qxia              #+#    #+#             */
/*   Updated: 2022/10/10 15:17:55 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):type(type){
    return ;
}

Weapon::~Weapon(void){
    return ;
}

void Weapon::setType(std::string type){
    this->type = type;
    return ;
}

std::string const& Weapon::getType(void) const{
    return (this->type);
}
