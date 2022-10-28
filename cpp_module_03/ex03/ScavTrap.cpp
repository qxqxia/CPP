/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:37:10 by qxia              #+#    #+#             */
/*   Updated: 2022/10/28 16:31:47 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

//在设计派生类时，对继承过来的成员变量的初始化工作也要由派生类的构造函数完成，
//但是大部分基类都有 private 属性的成员变量，它们在派生类中无法访问，更不能使用派生类的构造函数来初始化。
//解决思路：在派生类的构造函数中调用基类的构造函数。

ScavTrap::ScavTrap(void):ClapTrap(){
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    std::cout << "ScavTrap constructor called.\n";
    return ;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    std::cout << "ScavTrap " << name << " constructor called.\n";
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src){
    std::cout << "Copy ScavTrap constructor called.\n";
    *this = src;
    return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs){
    std::cout << "ScavTrap: copy assignment operator called.\n";
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_energypoints = rhs._energypoints;
    this->_attackdamage = rhs._attackdamage;
    return *this;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap " << this->_name << " destructor called.\n";
    return ;
}

void ScavTrap::attack(const std::string& target){
    if (this->_energypoints <= 0)
        std::cout << "Ooops! ScavTrap has no more energy\n";
    if (this->_hitpoints <= 0)
        std::cout << "Ooops! ScavTrap has no breathe.\n";
    this->_energypoints --;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ".\n";
    return ;
}

void ScavTrap::guardGate(){
    if (this->_hitpoints > 0){
        std::cout << "ScavTrap " << this->_name << " is on mode Gate keeper.\n";
    }
    return ;
}

void ScavTrap::setHitpoints(void){
    this->_hitpoints = 100;
    return ;
}

void ScavTrap::setEnergypoints(void){
    this->_energypoints = 50;
    return ;
}

void ScavTrap::setAttackdamage(void){
    this->_attackdamage = 20;
    return ;
}