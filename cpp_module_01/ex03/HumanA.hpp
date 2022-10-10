/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:24:17 by qxia              #+#    #+#             */
/*   Updated: 2022/10/10 15:15:57 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    public:
        HumanA(std::string name, Weapon& club);
        ~HumanA(void);

        void attack(void);
        
    private:
        //Since HumanA will always be armed.
        // The private attribute Weapon is set as a reference.
        // Because a reference can never point to NULL.
        Weapon& _club;
        std::string name;
};

#endif
