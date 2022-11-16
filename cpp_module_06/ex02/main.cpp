/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:43:05 by qxia              #+#    #+#             */
/*   Updated: 2022/11/16 17:44:44 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate(void){
    srand(time(NULL));
    int i = rand() % 3;
    
    switch(i){
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
        default:
            return NULL;
    }
}

void identify(Base* p){
    A* pA = dynamic_cast<A*>(p);
    B* pB = dynamic_cast<B*>(p);
    C* pC = dynamic_cast<C*>(p);
    
    if (pA != nullptr){
        std::cout << "A\n";
    }
    if (pB != nullptr){
        std::cout << "B\n";
    }
    if (pC != nullptr){
        std::cout << "C\n";
    }
    else{
        std::cout << "Downcast failed.\n";
    }
    
}

void identify(Base& p){
    try{
        A& a = dynamic_cast<A&>(p);
        std::cout << "A\n";
    }catch(std::bad_cast){}
    try{
        B& b = dynamic_cast<B&>(p);
        std::cout << "B\n";
    }catch(std::bad_cast){}
    try{
        C& c = dynamic_cast<C&>(p);
        std::cout << "C\n";
    }catch(std::bad_cast){}
}

int main(){
    
}