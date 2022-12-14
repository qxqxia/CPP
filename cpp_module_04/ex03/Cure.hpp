/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:07:11 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 15:44:23 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{
    public:
        Cure(void);
        Cure(Cure const &src);
        ~Cure(void);
        
        Cure& operator=(Cure const &rhs);
        
        Cure* clone() const;
        void use(ICharacter& target);
};

#endif