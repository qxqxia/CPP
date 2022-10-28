/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:25:39 by qxia              #+#    #+#             */
/*   Updated: 2022/10/28 12:19:45 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        FragTrap& operator=(FragTrap const &rhs);
        ~FragTrap(void);

        void attack(const std::string& target);
        void setHitpoints(void);
        void setEnergypoints(void);
        void setAttackdamage(void);
    private:
        void highFivesGuys(void);

};

#endif