/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:03:52 by qxia              #+#    #+#             */
/*   Updated: 2022/10/21 16:15:25 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();

        void guardGate();
    private:
        std::string _name;
        int _Hitpoints;
        int _Energypoints;
        int _Attackdamage;
};