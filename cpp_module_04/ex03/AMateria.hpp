/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:20:47 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 15:12:21 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria{
    protected:
        std::string _type;
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(AMateria const &src);
        virtual ~AMateria(void);
        
        AMateria& operator=(AMateria const &rhs);
        
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif