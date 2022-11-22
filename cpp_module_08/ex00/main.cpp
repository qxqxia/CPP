/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:28 by qxia              #+#    #+#             */
/*   Updated: 2022/11/22 12:10:20 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	int myints[] = {10, 20, 30, 40, 50};
	std::vector<int> myvector(myints, myints + 5);
	
	try{
		easyfind(myints, 30);
		std::cout << "find: " << *it << std::endl;
	}catch(const std::exception &e){};
	return 0;
