/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:18:22 by qxia              #+#    #+#             */
/*   Updated: 2022/11/01 11:09:49 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name("default"){
    std::cout << "ClapTrap constructor called.\n";
    this->_hitpoints = 10;
    this->_energypoints = 10;
    this->_attackdamage = 0;
    return ;
}

ClapTrap::ClapTrap(std::string name):_name(name){
    std::cout << "ClapTrap " << name << " constructor called.\n";
    this->_hitpoints = 10;
    this->_energypoints = 10;
    this->_attackdamage = 0;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src){
    std::cout << "Copy ClapTrap constructor called.\n";
    *this = src;
    return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs){
    std::cout << "ClapTrap: Copy assignment operator called.\n";
    if (this == &rhs)
        return *this;
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
        std::cout << "Ooops! ClapTrap has no more energy\n";
    if (this->_hitpoints <= 0)
        std::cout << "Ooops! ClapTrap has no breathe.\n";
    
    else{
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", ";
        this->_energypoints --;
    }
    return ;
}

void ClapTrap::takeDamage(unsigned int amount){ 
    std::cout << "causing " << amount << " points of damage!\n";
    this->_hitpoints -= amount;
    if (this->_hitpoints <= 0)
        std::cout << "Ooops! no breathe. \n";
    else
        std::cout << "The hitpoints of " << this->_name << " is " << this->_hitpoints << " now.\n";
    return ;
}

void ClapTrap::beRepaired(unsigned int amount){
    this->_hitpoints +=amount;
    this->_energypoints +=amount;
    this->_energypoints --;
    std::cout << this->_name << " regagne " << amount << " points.\n";
    std::cout << "Now the hitpoints is " << this->_hitpoints << " points.\n";
    std::cout << "Now the energypoints is " << this->_energypoints << " points.\n";
    return ;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap " << this->_name << " destructor called.\n";
    return ;
}

