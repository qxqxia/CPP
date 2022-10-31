/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:14:40 by qxia              #+#    #+#             */
/*   Updated: 2022/10/31 15:21:02 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
    const Animal* meta = new Animal();
    std::cout << "\n";
    const Animal* j = new Dog();
    std::cout << "\n";
    const Animal* i = new Cat();
    std::cout << "\n";

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << "\n";
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "\n";
    delete meta;
    std::cout << "\n";
    delete j;
    std::cout << "\n";
    delete i;
    std::cout << "\n";
    const WrongAnimal* x = new WrongAnimal();
    std::cout << "\n";
    const WrongAnimal* y = new WrongCat();
    std::cout << "\n";
    x->makeSound();
    y->makeSound();
    std::cout << "\n";

    delete x;
    std::cout << "\n";
    delete y;
    std::cout << "\n";
    return 0;
}
