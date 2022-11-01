/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:12:30 by qxia              #+#    #+#             */
/*   Updated: 2022/11/01 22:13:20 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    Cat(std::string name);
    Cat(Cat const &src);
    ~Cat(void);

    Cat &operator=(Cat const &rhs);
    void makeSound() const;
    Brain *getBrain() const;

private:
    Brain *CatBrain;
    std::string _name;
};

#endif