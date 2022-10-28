/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:25:31 by qxia              #+#    #+#             */
/*   Updated: 2022/10/28 12:34:07 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):ClapTrap(){
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
    std::cout << "FragTrap constructor called.\n";
    return ;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
    std::cout << "FragTrap " << this->_name << " constructor called.\n";
    return ;
}

FragTrap::FragTrap(FragTrap const &src):ClapTrap(src){
    std::cout << "Copy FragTrap constructor called.\n";
    *this = src;
    return ;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs){
    std::cout << "Fragtrap: copy assignment operator called.\n";
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energypoints = rhs._energypoints;
    this->_attackdamage = rhs._attackdamage;
    return *this;
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap destructor called.\n";
    return ;
}

void FragTrap::attack(const std::string& target){
    if (this->_energypoints <= 0)
        std::cout << "Ooops! FragTrap has no more energy\n";
    if (this->_hitpoints <= 0)
        std::cout << "Ooops! FragTrap has no breathe.\n";
    this->_energypoints --;
    std::cout << "FragTrap " << this->_name << " attacks " << target << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void){
    if (this->_hitpoints <= 0)
        std::cout << "Ooops! FragTrap has no breathe.\n";
    std::cout << "FragTrap: high fives please!\n";
    return ;
}

void FragTrap::setHitpoints(void){
    this->_hitpoints = 100;
    return ;
}

void FragTrap::setEnergypoints(void){
    this->_energypoints = 100;
    return ;
}

void FragTrap::setAttackdamage(void){
    this->_attackdamage = 30;
    return ;
}