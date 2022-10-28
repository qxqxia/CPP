/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:18:34 by qxia              #+#    #+#             */
/*   Updated: 2022/10/28 16:40:44 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    ClapTrap A("qxia");
    ScavTrap B("Tom");

    A.attack(B.getName());
    B.takeDamage(2);
    B.beRepaired(5);
    B.guardGate();
    
    B.attack(A.getName());
    A.takeDamage(1);
    A.beRepaired(8);
    return (0);
}