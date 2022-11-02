/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:43:23 by qxia              #+#    #+#             */
/*   Updated: 2022/10/31 15:32:12 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &src);
        virtual ~WrongAnimal(void); //must add virtual 
        
        WrongAnimal& operator=(WrongAnimal const &rhs);
        
        std::string getType(void) const;
        //if we don't declare virtual, function makesound in the base class will be called.
        void makeSound()const;
    protected:
        std::string _type;
};

#endif