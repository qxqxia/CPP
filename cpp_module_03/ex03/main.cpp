/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:18:34 by qxia              #+#    #+#             */
/*   Updated: 2022/10/27 15:03:43 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
    ClapTrap A("qxia");
    ClapTrap B("Tom");
    

    A.attack(B.getName());
    A.takeDamage(0);
    A.attack(B.getName());
    A.beRepaired(4);
    return (0);
    //need more tests
}