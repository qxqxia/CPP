/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:30:58 by qxia              #+#    #+#             */
/*   Updated: 2022/10/31 14:39:13 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
    public:
        Animal(void);
        Animal(Animal const &src);
        //error:delete called on non-final 'Animal' that has virtual functions but non-virtual destructor
        virtual ~Animal(void);

        Animal& operator=(Animal const &rhs);
        
        std::string getType(void) const;
        //当基类指针指向一个子类对象，通过这个指针调用子类和基类同名成员函数的时候，
        //基类声明为虚函数「子类不写也可以」就会调子类的这个函数，不声明就会调用基类的.
        virtual void makeSound()const;
    protected:
        std::string _type;
    
};

#endif