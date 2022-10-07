/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:46:38 by qxia              #+#    #+#             */
/*   Updated: 2022/10/07 11:33:15 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP 

#include <iostream>
#include <string>

class Zombie{
    public:
        Zombie(std::string name):_name(name){
            std::cout << "Zombie " << this->_name << " is born" << std::endl;
        }
        ~Zombie(){
            std::cout << "Zombie " << this->_name << " is destroyed" << std::endl;
        }
        
        void announce(void);

    private:
        std::string _name;
        
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif