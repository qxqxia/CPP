/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:18:34 by qxia              #+#    #+#             */
/*   Updated: 2022/10/21 15:37:07 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap A("qxia");
    ClapTrap B("Tom");
    

    A.attack(B.getName());
    A.takeDamage(11);
    A.attack(B.getName());
    A.beRepaired(4);
    return (0);
}