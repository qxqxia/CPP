/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:56:54 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 15:18:10 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP 
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria{
    public:
        Ice(void);
        Ice(Ice const &src);
        ~Ice(void);
        
        Ice& operator=(Ice const &rhs);
        
        Ice* clone() const;
        void use(ICharacter& target);
};

#endif