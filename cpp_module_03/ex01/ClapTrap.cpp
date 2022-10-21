/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:18:22 by qxia              #+#    #+#             */
/*   Updated: 2022/10/21 15:40:16 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name(0){
    this->_hitpoints = 10;
    this->_energypoints = 10;
    this->_attackdamage = 0;
    std::cout << "ClapTrap constructor called.\n";
}

ClapTrap::ClapTrap(std::string name):_name(name){
    this->_hitpoints = 10;
    this->_energypoints = 10;
    this->_attackdamage = 0;
    std::cout << "ClapTrap " << name << " constructor called.\n";
}

ClapTrap::ClapTrap(ClapTrap const &src){
    std::cout << "Copy ClapTrap constructor called.\n";
    *this = src;
    return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs){
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energypoints = rhs._energypoints;
    this->_attackdamage = rhs._attackdamage;
    return *this;
    
}

std::string ClapTrap::getName(void) const{
    return (this->_name);
}

void ClapTrap::attack(const std::string& target){
    if (this->_energypoints <= 0)
        std::cout << "Ooops! no more energy\n";
    if (this->_hitpoints <= 0)
        std::cout << "Ooops! ClapTrap has no breathe.\n";
    this->_energypoints --;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", ";
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_attackdamage > 10)
        
    this->_hitpoints -= amount;
    std::cout << " causing " << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount){
    this->_hitpoints +=amount;
    this->_energypoints --;
    std::cout << "ClapTrap regagne " << amount << " points.\n";
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called.\n";
}

