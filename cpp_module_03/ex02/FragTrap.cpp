/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:25:31 by qxia              #+#    #+#             */
/*   Updated: 2022/10/26 16:21:32 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):_name(0){
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
    std::cout << "FragTrap constructor called.\n";
    return ;
}

FragTrap::FragTrap(std::string name):_name(name){
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
    std::cout << "FragTrap " << this->_name << " constructor called.\n";
    return ;
}

FragTrap::FragTrap(FragTrap const &src){
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
    
}

void FragTrap::highFivesGuys(void){
    if (this->_hitpoints <= 0)
        std::cout << "Ooops! FragTrap has no breathe.\n";
    std::cout << "FragTrap: high fives please!\n";
    return ;
}