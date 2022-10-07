/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:29:47 by qxia              #+#    #+#             */
/*   Updated: 2022/10/07 12:19:59 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie *zombieHorde = new Zombie[N];

    if (N <= 0 || N > 2147483647)
        return (NULL);
    for (int i =  0; i < N; i++){
        zombieHorde[i].setName(name);
    }
    return (zombieHorde);
}