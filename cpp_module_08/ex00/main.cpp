/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:28 by qxia              #+#    #+#             */
/*   Updated: 2022/11/23 15:01:40 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	
	std::cout << "~~~vector test~~~\n";
	int myints[] = {10, 20, 30, 40, 50};
	std::vector<int> myvector(myints, myints + 5);
	
	try{
		std::cout << "The contents of myvector are:\n";
		for(std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
			std::cout << ' ' << *it << std::endl;
		std::cout << "Easyfind: " << easyfind(myvector, 60) << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	};

	std::cout << "~~~list test~~~\n";
	std::list<int> mylist;

	for (int i = 0; i < 10; i++){
		mylist.push_back(i);
	}
	try{
		std::cout << "The contents of mylist are:\n";
		for(std::list<int>::iterator i = mylist.begin(); i != mylist.end(); ++i)
			std::cout << ' ' << *i << std::endl;
		std::cout << "Easyfind: " << easyfind(mylist, 1) << std::endl;
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	};
	return 0;
}
