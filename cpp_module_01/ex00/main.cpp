/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:46:33 by qxia              #+#    #+#             */
/*   Updated: 2022/10/06 16:40:15 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie Zombie1 = Zombie("Z_stack");
    Zombie1.announce();
    randomChump("Ramdom_Z");
    
    Zombie* Zombie2 = new Zombie("Z_heap");
    Zombie2->announce();
    delete Zombie2; //Zombie2 is destroyed
    
    Zombie *newZombie1 = newZombie("New_Z_heap");
    newZombie1->announce();
    delete newZombie1;//newZombie1 is destroyed
    
    return (0); // Zombie1 et Ramdom_Z are destroyed
}
