/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:59 by qxia              #+#    #+#             */
/*   Updated: 2022/09/29 16:21:04 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Contact.hpp"
#include <string>  //string et getline
#include <cstdlib>
#include <iostream>

int main()
{
    std::string name;
    
    std::cout << "Please enter your first name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";

    return 0;
}
