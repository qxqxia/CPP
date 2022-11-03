/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:43:37 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 22:52:07 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

// Object_interface
class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(MateriaSource const &src);
    ~MateriaSource();

    MateriaSource &operator=(MateriaSource const &rhs);

    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);

private:
    AMateria *_source[4];
};

#endif