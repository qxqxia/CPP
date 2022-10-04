/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:41 by qxia              #+#    #+#             */
/*   Updated: 2022/10/04 11:06:10 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

int PhoneBook::emptyContact(int index){
    return (this->contactArray[index].get_first_name() == "");
}

void PhoneBook::showMenu(void){
    std::cout << "******************" << std::endl;
    std::cout << "*****  ADD   *****" << std::endl;
    std::cout << "***** SEARCH *****" << std::endl;
    std::cout << "*****  EXIT  *****" << std::endl;
    std::cout << "******************" << std::endl;
}

void PhoneBook::exit(void){
    std::exit(EXIT_SUCCESS);    
}

void PhoneBook::addContact(int index, Contact new_contact){
    this->contactArray[index] = new_contact;
}

std::string check_str(std::string str){
    if (str.size() >= 10)
    {
        str = str.substr(0, 9);
        str = str + '.';
    }
    return (str);
}

void PhoneBook::showContact(void){
    std::cout << std::setw(10) << "index"
              << " | " << std::setw(10) << "first name"
              << " | " << std::setw(10) << "last name"
              << " | " << std::setw(10) << "nickname" << std::endl;
    for (int index = 0; index < 8; index++)
    {
        std::cout << std::setw(10) << "index"
                  << " | " << std::setw(10) << check_str(this->contactArray[index].get_first_name().substr(0, 10))
                  << " | " << std::setw(10) << check_str(this->contactArray[index].get_last_name().substr(0, 10))
                  << " | " << std::setw(10) << check_str(this->contactArray[index].get_nickname().substr(0, 10)) << std::endl;
    }
    return;
}

int main(void){
    PhoneBook mybook; // creat phonebook
    int index = 0;  // index of each contact
    std::string input;

    while (1)
    {
        mybook.showMenu();
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            if (index == 8)
                index = 0;
            Contact new_contact;
            mybook.addContact(index, new_contact);
            index++;
        }
        // else if (input == "SEARCH"){

        // }
        else if (input == "EXIT"){
            mybook.exit();
        }
        else{
            std::cout << "*input not found*" << std::endl;
        }
    }
    return (0);
}
