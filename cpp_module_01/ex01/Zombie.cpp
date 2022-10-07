/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:29:11 by qxia              #+#    #+#             */
/*   Updated: 2022/10/07 11:56:34 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name){
    this->_name = name;
}

void Zombie::announce(void){
    std::cout << "Zombie " << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
