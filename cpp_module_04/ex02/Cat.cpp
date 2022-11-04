/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:35:20 by qxia              #+#    #+#             */
/*   Updated: 2022/11/04 11:25:54 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : AAnimal(){
    std::cout << "Cat constructor called.\n";
    this->_type = "Cat";
    this->CatBrain = new Brain();
}

Cat::Cat(Cat const &src) : AAnimal(src){ //deep copy
    std::cout << "Cat copy constructor called.\n";
    this->_type = src._type;
    this->CatBrain = new Brain();
    for(int i = 0; i < 100; i++){
        this->CatBrain->ideas[i] = src.CatBrain->ideas[i];
    }
}

Cat::~Cat(void){
    std::cout << "Cat destructor called.\n";
    delete CatBrain;
}

Cat& Cat::operator=(Cat const &rhs){ //deep copy
    std::cout << "Cat copy assignment operator called.\n";
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    for(int i = 0; i < 100; i++){
        this->CatBrain->ideas[i] = rhs.CatBrain->ideas[i];
    }
    return (*this);
}

void Cat::makeSound()const{
    std::cout << this->_type << " makes no sound.\n";
    return ;
}

Brain* Cat::getBrain()const{
    return (this->CatBrain);
}

void Cat::addIdea(std::string idea){
    std::cout << "Add " << idea << "\n";
    this->CatBrain->addIdea(idea);
}

void Cat::printIdeas(void)const{
    std::cout << "Print ideas of cat:\n";
    this->CatBrain->printIdeas();
}