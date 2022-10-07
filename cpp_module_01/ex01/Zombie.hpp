/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:28:57 by qxia              #+#    #+#             */
/*   Updated: 2022/10/07 14:10:47 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
    public:
        Zombie(void){
            std::cout << "Zombie " << this->_name << "is born" << std::endl;
        }
        ~Zombie(void){
            std::cout << "Zombie " << this->_name << " is destroyed" << std::endl;
        }

    void announce(void);
    void setName(std::string name);
    
    private:
        std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif