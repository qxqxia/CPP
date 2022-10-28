/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:05:12 by qxia              #+#    #+#             */
/*   Updated: 2022/10/28 16:02:09 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Virtual inheritance is a C++ technique that ensures only one copy of a base class's member variables are inherited by grandchild derived classes.
//the diamond problem

DiamondTrap::DiamondTrap(void):ScavTrap(), FragTrap(){
    this->_name = "default";
    this->ClapTrap::_name = "default_clap_name";
    FragTrap::setHitpoints();
    ScavTrap::setEnergypoints();
    FragTrap::setAttackdamage();
    std::cout << "DiamondTrap constructor called.\n";
    return ;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), ScavTrap(name), FragTrap(name){
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    FragTrap::setHitpoints();
    ScavTrap::setEnergypoints();
    FragTrap::setAttackdamage();
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
    std::cout << "DiamondTrap " << this->_name << " destructor called.\n";
    return ;
}

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "The name of DiamondTrap is: " << this->_name << std::endl;
    std::cout << "The name of ClapTrap is: " << this->ClapTrap::_name << std::endl;
}