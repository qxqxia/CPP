/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:13:57 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 16:41:37 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void){
    std::cout << "character constructor called.\n";
    
}
        
Character::Character(std::string name){
    
}
        
Character::Character(Character const &src){
    
}
        
Character::~Character(void){
    
}

Character& Character::operator=(Character const &rhs){
    
}
         
std::string const & Character::getName() const{
    
}

void Character::equip(AMateria* m){
    
}
        
void Character::unequip(int idx){
    
}

void Character::use(int idx, ICharacter& target){
    
}