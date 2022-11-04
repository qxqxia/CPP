/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:43:37 by qxia              #+#    #+#             */
/*   Updated: 2022/11/04 13:47:10 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

# define Maxnbr 4

// Object_interface
class MateriaSource : public IMateriaSource{
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        ~MateriaSource(void);

        MateriaSource &operator=(MateriaSource const &rhs);

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);

    private:
        AMateria *_source[Maxnbr];
};

#endif