/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:00:58 by qxia              #+#    #+#             */
/*   Updated: 2022/11/02 14:20:49 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Brain constructor called.\n";
}

Brain::Brain(Brain const &src){
    std::cout << "Brain copy constructor called.\n";
    for(int i = 0; i < 100; i++){
        this->ideas[i] = src.ideas[i];
    }
}

Brain::~Brain(void){
    std::cout << "Brain destructor called.\n";
}

Brain& Brain::operator=(Brain const &rhs){
    std::cout << "Brain copy assignment operator called.\n";
    if(this == &rhs)
        return (*this);
    for(int i = 0; i < 100; i++){
        this->ideas[i] = rhs.ideas[i];
    }
    return (*this);
}

void Brain::addIdea(std::string idea){
    int i = 0;
    while (!this->ideas[i].empty()){
        i++;
    }
    if (i < 100)
        this->ideas[i] = idea;
    else
        std::cout << "already 100 ideas!\n";
}

void Brain::printIdeas(void)const{
    int i = 0;
    if (this->ideas[i].empty()){
        std::cout << "no idea!\n";
    }
    for(int i = 0; i < 100 && !this->ideas[i].empty(); i++)
        std::cout << "Idea " << i + 1 << ": " << this->ideas[i] << std::endl;    
}