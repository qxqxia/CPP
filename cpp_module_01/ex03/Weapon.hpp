/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:23:45 by qxia              #+#    #+#             */
/*   Updated: 2022/10/07 17:35:53 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string type);
    ~Weapon();
    std::string &getType(void) const;
    void setType(std::string type);
};

#endif