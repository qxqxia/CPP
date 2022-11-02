/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:38:25 by qxia              #+#    #+#             */
/*   Updated: 2022/11/02 15:57:39 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal{
    public:
        AAnimal(void);
        AAnimal(AAnimal const &src);
        //error:delete called on non-final 'AAnimal' that has virtual functions but non-virtual destructor
        virtual ~AAnimal(void);

        AAnimal& operator=(AAnimal const &rhs);
        
        std::string getType(void) const;
        //当基类指针指向一个子类对象，通过这个指针调用子类和基类同名成员函数的时候，
        //基类声明为虚函数「子类不写也可以」就会调子类的这个函数，不声明就会调用基类的.
        virtual void makeSound()const = 0; //PURE VIRTURAL FUNCTION
        virtual void addIdea(std::string idea) = 0;
        virtual void printIdeas(void)const = 0;
    protected:
        std::string _type;
    
};

#endif