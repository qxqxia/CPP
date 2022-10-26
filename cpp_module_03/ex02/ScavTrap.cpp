/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:37:10 by qxia              #+#    #+#             */
/*   Updated: 2022/10/26 16:22:39 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

//在设计派生类时，对继承过来的成员变量的初始化工作也要由派生类的构造函数完成，
//但是大部分基类都有 private 属性的成员变量，它们在派生类中无法访问，更不能使用派生类的构造函数来初始化。
//解决思路：在派生类的构造函数中调用基类的构造函数。

ScavTrap::ScavTrap(void):ClapTrap("NULL"){
    this->_Hitpoints = 100;
    this->_Energypoints = 50;
    this->_Attackdamage = 20;
    std::cout << "ScavTrap constructor called.\n";
    return ;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    this->_Hitpoints = 100;
    this->_Energypoints = 50;
    this->_Attackdamage = 20;
    std::cout << "ScavTrap " << name << " constructor called.\n";
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &src){
    std::cout << "Copy ScavTrap constructor called.\n";
    *this = src;
    return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs){
    std::cout << "ScavTrap: copy assignment operator called.\n";
    this->_name = rhs._name;
    this->_Hitpoints = rhs._Hitpoints;
    this->_Energypoints = rhs._Energypoints;
    this->_Attackdamage = rhs._Attackdamage;
    return *this;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap destructor called.\n";
    return ;
}

void ScavTrap::attack(const std::string& target){
    if (this->_Energypoints <= 0)
        std::cout << "Ooops! ScavTrap has no more energy\n";
    if (this->_Hitpoints <= 0)
        std::cout << "Ooops! ScavTrap has no breathe.\n";
    this->_Energypoints --;
    std::cout << "ScavTrap " << this->_name << " attacks " << target;
    return ;
}

void ScavTrap::guardGate(){
    if (this->_Hitpoints > 0){
        std::cout << "ScavTrap is on mode Gate keeper.\n";
    }
    return ;
}