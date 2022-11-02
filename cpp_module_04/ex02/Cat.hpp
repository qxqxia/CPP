/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:12:30 by qxia              #+#    #+#             */
/*   Updated: 2022/11/02 15:59:31 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
    public:
        Cat(void);
        Cat(Cat const &src);
        ~Cat(void);

        Cat &operator=(Cat const &rhs);
        void makeSound() const;
        Brain *getBrain() const;
        void addIdea(std::string idea);
        void printIdeas(void)const;
    private:
        Brain *CatBrain;
};

#endif