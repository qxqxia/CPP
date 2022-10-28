/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:18:34 by qxia              #+#    #+#             */
/*   Updated: 2022/10/28 16:38:01 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
    ClapTrap A("qxia");
    ScavTrap B("Tom");
    FragTrap C("Jerry");
    

    A.attack(B.getName());
    B.takeDamage(2);
    B.guardGate();
    B.attack(A.getName());
    A.takeDamage(3);
    A.beRepaired(4);
    B.attack(C.getName());
    C.takeDamage(1);
    C.highFivesGuys();
    C.beRepaired(4);
    B.attack("qxia");
    A.takeDamage(1);
    A.beRepaired(1);
    B.guardGate();
    return (0);
}