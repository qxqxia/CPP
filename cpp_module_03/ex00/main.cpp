/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:18:34 by qxia              #+#    #+#             */
/*   Updated: 2022/10/28 16:42:30 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap A("qxia");
    
    A.attack("Tom");
    A.takeDamage(1);
    A.beRepaired(4);
    return (0);
}