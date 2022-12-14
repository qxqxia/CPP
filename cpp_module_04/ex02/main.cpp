/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:28:53 by qxia              #+#    #+#             */
/*   Updated: 2022/11/03 10:59:19 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {
	
	std::cout << "***Basic tests***\n";
	//class abstraite cannot be instancied
	//const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	//std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); 
	j->makeSound();

	i->printIdeas();
	j->printIdeas();

	delete(j);
	delete(i);
	//delete(meta);
	std::cout << std::endl;

	std::cout << "***AAnimal tableau***\n";
	int	n = 6;
	AAnimal* Aanimals[n];
	for (int i = 0; i < n; i++) {
		if (i < (n / 2)) {
			Aanimals[i] = new Dog();
		} 
		else {
			Aanimals[i] = new Cat();
		}
	}
	std::cout << std::endl;

	std::cout << "***Delete tests***\n";
	for (int i = 0; i < n; i++) {
		delete Aanimals[i];
	}
	std::cout << std::endl;

	std::cout << "***CAT deep copy tests***\n";
	Cat cat1;
	Cat cat2;
	std::cout << "\n";
	cat1.addIdea("cat1 hello1");
	cat1.addIdea("cat1 baby2");
	std::cout << "\n";
	cat2 = cat1;
	Cat cat3(cat2);
	cat3.addIdea("cat3 every3");
	cat1.printIdeas();
	std::cout << "\n";
	cat2.printIdeas();
	std::cout << "\n";
	cat3.printIdeas();
	std::cout << "\n";

	std::cout << "***DOG deep copy tests***\n";
	Dog dog1;
	Dog dog2;
	std::cout << "\n";
	dog1.addIdea("dog1 ni1");
	dog1.addIdea("dog1 hao2");
	std::cout << "\n";
	dog2 = dog1;
	Dog dog3(dog1);
	dog3.addIdea("dog3 ma3");
	dog1.printIdeas();
	std::cout << "\n";
	dog2.printIdeas();
	std::cout << "\n";
	dog3.printIdeas();
	std::cout << "\n";
}
