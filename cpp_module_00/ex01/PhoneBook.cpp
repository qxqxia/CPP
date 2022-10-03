/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:41 by qxia              #+#    #+#             */
/*   Updated: 2022/10/03 11:28:48 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

std::string check_str(std::string str)
{
    if (str.size() >= 10)
    {
        str = str.substr(0, 9);
        str = str + '.';
    }
    return (str);
}

void PhoneBook::print_contact(void)
{
    // pas encore compris
    std::cout << std::setw(10) << "index"
              << " | " << std::setw(10) << "first name"
              << " | " << std::setw(10) << "last name"
              << " | " << std::setw(10) << "nickname" << std::endl;
    for (int index = 0; index < 8; index++)
    {
        std::cout << std::setw(10) << "index"
                  << " | " << std::setw(10) << check_str(this->)
                  << " | " << std::setw(10) < < < <
            " | " << std::setw(10) < < < < std::endl;
    }
    return;
}

void showMenu()
{
    std::cout << "******************" << std::endl;
    std::cout << "*****  ADD   *****" << std::endl;
    std::cout << "***** SEARCH *****" << std::endl;
    std::cout << "*****  EXIT  *****" << std::endl;
    std::cout << "******************" << std::endl;
}

int main(void)
{
    PhoneBook awesomebook;
    std::string input = "";
    int index = 0;

    while (input != "EXIT")
    {
        showMenu();
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            if (index == 8)
                index = 0;
            Contact new_contact;
            awesomebook.add_contact(index, new_contact);
            index++;
        }
        else if (input == "SEARCH")
        {
        }
    }
    std::cout << std::endl;
    return (0);
}
