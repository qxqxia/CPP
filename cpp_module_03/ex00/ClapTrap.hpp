/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:18:30 by qxia              #+#    #+#             */
/*   Updated: 2022/10/26 11:40:49 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap(void);
        
        ClapTrap& operator=(ClapTrap const &rhs);
        
        std::string getName(void) const;
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string _name;
        int _hitpoints;
        int _energypoints;
        int _attackdamage;
        
};

#endif