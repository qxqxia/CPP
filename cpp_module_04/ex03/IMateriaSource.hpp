/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:33:30 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 14:53:52 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERASOURCE_HPP
# define IMATERASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif