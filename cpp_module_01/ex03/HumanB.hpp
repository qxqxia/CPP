/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:24:46 by qxia              #+#    #+#             */
/*   Updated: 2022/10/10 15:16:18 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void setWeapon(Weapon& club);
        void attack(void);
        
    private:
        // Set as a pointer because it might not be armed.
        Weapon* _club;
        std::string name;
};

#endif
