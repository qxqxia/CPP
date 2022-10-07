/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:38:56 by qxia              #+#    #+#             */
/*   Updated: 2022/10/07 15:19:57 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string str1 = "HI THIS IS BRAIN";
    std::string* stringPTR = &str1; //adderess of str1
    std::string& stringREF = str1; //stringREF is the alias of str1. 
    //it init at the beginning of str1 and it is string

    std::cout << "The adresse of str1: " << &str1 << std::endl;
    std::cout << "The adresse held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The adresse held by stringREF: " << &stringREF << std::endl;

    std::cout << "the value of str1: " << "HI THIS IS BRAIN"  <<  std::endl;
    std::cout << "the value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "the value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}