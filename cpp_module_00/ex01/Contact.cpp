/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:59 by qxia              #+#    #+#             */
/*   Updated: 2022/10/03 14:45:58 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>  //string et getline
#include <cstdlib>
#include <iostream>

Contact::Contact(void) {}
Contact::~Contact(void) {}

std::string get_input(std::string const message){
    std::string input;
    std::cout << message;
    std:: getline(std::cin, input);
    
}