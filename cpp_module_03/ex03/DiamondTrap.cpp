/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:05:12 by qxia              #+#    #+#             */
/*   Updated: 2022/10/27 16:37:18 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Virtual Inheritance

DiamondTrap::DiamondTrap(void):ScavTrap(), FragTrap(){
    this->_name = "unknown";
    ClapTrap._name = "unknown_clap_name";
    this->_hitpoints = FragTrap._hitpoints; //private attribut, get first
    this->_energypoints = ScavTrap._Energypoints;
    this->_attackdamage = FragTrap._attackdamage;
    std::cout << "DiamondTrap constructor called.\n";
    return ;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), ScavTrap(name), FragTrap(name){
    this->_name = name;
    ClapTrap._name = name + "_clap_name";
    this->_hitpoints = FragTrap._hitpoints;
    this->_energypoints = ScavTrap._Energypoints;
    this->_attackdamage = FragTrap._attackdamage;
    std::cout << "DiamondTrap " << this->_name << " constructor called.\n";
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src):ClapTrap(src), ScavTrap(src), FragTrap(src){
    std::cout << "Copy DiamondTrap constructor called.\n";
    *this = src;
    return ;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &rhs){
    std::cout << "DiamondTrap: copy assignment operator called.\n";
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_attackdamage = rhs._attackdamage;
    return *this;
}

DiamondTrap::~DiamondTrap(void){
    std::cout << "DiamondTrap destructor called.\n";
    return ;
}

void DiamondTrap::attack(const std::string& target){
    
}

void DiamondTrap::whoAmI(){
    
}