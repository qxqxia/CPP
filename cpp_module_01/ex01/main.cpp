/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:28:46 by qxia              #+#    #+#             */
/*   Updated: 2022/10/07 14:04:11 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie* zombies = zombieHorde(6, "big_Z");
    
    for (int i = 0; i < 6; i++){
        std::cout << "No."<< i + 1 << " ";
        zombies[i].announce();
    }

    delete [] zombies;
    return 0;
}
