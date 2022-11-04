/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:44:39 by qxia              #+#    #+#             */
/*   Updated: 2022/11/04 14:42:29 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal(){
    std::cout << "Dog constructor called.\n";
    this->_type = "Dog";
    this->DogBrain = new Brain();
}

Dog::Dog(Dog const &src) : AAnimal(src){
    std::cout << "Dog copy constructor called.\n";
    this->_type = src._type;
    this->DogBrain = new Brain();
    for(int i = 0; i < 100; i++){
        this->DogBrain->ideas[i] = src.DogBrain->ideas[i];
    }
}

Dog::~Dog(void){
    std::cout << "Dog destructor called.\n";
    delete DogBrain;
}

Dog& Dog::operator=(Dog const &rhs){
    std::cout << "Dog copy assignment operator called.\n";
    if (this == &rhs)
        return (*this);
    if (this->DogBrain)
        delete (this->DogBrain);
    this->_type = rhs._type;
    this->DogBrain = new Brain();
    for(int i = 0; i < 100; i++){
        this->DogBrain->ideas[i] = rhs.DogBrain->ideas[i];
    }
    return (*this);
}

void Dog::makeSound()const{
    std::cout << this->_type << " barks.\n";
    return ;
}

Brain* Dog::getBrain()const{
    return (this->DogBrain);
}

void Dog::addIdea(std::string idea){
    std::cout << "Add idea: " << idea << "\n";
    this->DogBrain->addIdea(idea);
}

void Dog::printIdeas(void)const{
    std::cout << "Print ideas of dog:\n";
    this->DogBrain->printIdeas();
}