/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:25:39 by qxia              #+#    #+#             */
/*   Updated: 2022/10/26 16:15:50 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        FragTrap& operator=(FragTrap const &rhs);
        ~FragTrap(void);

        void attack(const std::string& target);
        void highFivesGuys(void);
        
    private:
        std::string _name;
        int _hitpoints;
        int _energypoints;
        int _attackdamage;
};

#endif