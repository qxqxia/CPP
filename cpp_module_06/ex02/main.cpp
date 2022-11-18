/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:43:05 by qxia              #+#    #+#             */
/*   Updated: 2022/11/18 10:33:57 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void) {}

Base *generate(void){
    srand(time(NULL));
    int i = rand() % 3;

    switch (i){
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

void identify(Base *p){
    A *pA = dynamic_cast<A *>(p);
    B *pB = dynamic_cast<B *>(p);
    C *pC = dynamic_cast<C *>(p);

    if (pA){
        std::cout << "A\n";
    }
    else if (pB){
        std::cout << "B\n";
    }
    else if (pC){
        std::cout << "C\n";
    }
    else{
        std::cout << "Downcast failed.\n";
    }
}

void identify(Base &p){
    try{
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A\n";
    }catch (std::exception &e){
        std::cout << "A " << e.what() << std::endl;
    }
    try{
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B\n";
    }catch (std::exception &e){
        std::cout << "B " << e.what() << std::endl;
    }
    try{
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C\n";
    }catch (std::exception &e){
        std::cout << "C " << e.what() << std::endl;
    }
}

int main(){
    Base *baseptr = generate();

    identify(baseptr);
    identify(*baseptr);

    delete baseptr;
    return (0);
}