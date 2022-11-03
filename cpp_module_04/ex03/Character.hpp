/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:40:00 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 16:14:43 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

//Object_interface
//1. declarer une interface: ICharacter
//2. Implementer cette interface par heritage
class Character : public ICharacter{
    public:
        Character(void);
        Character(std::string name);
        Character(Character const &src);
        ~Character(void);

        Character& operator=(Character const &rhs);
         
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        std::string _name;
        AMateria* _inventaire[4];
};

#endif