/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:46:37 by qxia              #+#    #+#             */
/*   Updated: 2022/10/17 11:44:49 by qxia             ###   ########.fr       */
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
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !\n";
    return ;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n";
    return ;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
    return ;
}

void Harl::complain(std::string level){
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    ft_pointer[0] = &Harl::debug; 
    ft_pointer[1] = &Harl::info;
    ft_pointer[2] = &Harl::warning;
    ft_pointer[3] = &Harl::error;

    int i = 0;
    while(i < 4 && (levels[i] != level))
        i++;
    switch(i){
        case 0:
            (this->*ft_pointer[i++])();
        case 1:
            (this->*ft_pointer[i++])();
        case 2:
            (this->*ft_pointer[i++])();
        case 3:
            (this->*ft_pointer[i++])();
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
    return ;
}