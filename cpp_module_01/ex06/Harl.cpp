/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:46:37 by qxia              #+#    #+#             */
/*   Updated: 2022/10/12 13:01:12 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
    return ;
}

Harl::~Harl(void){
    return ;
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !\n";
    return ;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
    return ;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free\n. I’ve been coming for years whereas you started working here since last month.\n";
    return ;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
    return ;
}

void Harl::complain(std::string level){
    
}