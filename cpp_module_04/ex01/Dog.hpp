/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:12:12 by qxia              #+#    #+#             */
/*   Updated: 2022/11/02 14:45:55 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    public:
        Dog(void);
        Dog(Dog const &src);
        ~Dog(void);

        Dog& operator=(Dog const &rhs);
        void makeSound()const;
        Brain* getBrain()const;
        void addIdea(std::string idea);
        void printIdeas(void)const;
    private:
        Brain* DogBrain;
};

#endif