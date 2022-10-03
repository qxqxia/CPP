/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:41 by qxia              #+#    #+#             */
/*   Updated: 2022/10/03 14:51:28 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

/*std::string check_str(std::string str)
{
    if (str.size() >= 10)
    {
        str = str.substr(0, 9);
        str = str + '.';
    }
    return (str);
}*/

/*void PhoneBook::showContact(void)
{
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
}*/

void PhoneBook::showMenu(void)
{
    std::cout << "******************" << std::endl;
    std::cout << "*****  ADD   *****" << std::endl;
    std::cout << "***** SEARCH *****" << std::endl;
    std::cout << "*****  EXIT  *****" << std::endl;
    std::cout << "******************" << std::endl;
}

void PhoneBook::addContact(*book){
    //firstname
    std::string firstname;
    std::cout << "Please enter your first name: " << std::endl;
    std::cin >> firstname;
    book->contactArray[book->index].first_name = firstname;
    //lastname
    std::cout << "Please enter your last name: " << std::endl;
    std::string lastname;
    std::cin >> lastname;
    book->contactArray[book->index].last_name = lastname;
    //nickname
    std::cout << "Please enter your nick name: " << std::endl;
    std::string nickname;
    std::cin >> nickname;
    book->contactArray[book->index].nickname = nickname;
    //phone
    std::cout << "Please enter your phonenumber: " << std::endl;
    std::string phone = "";
    std::cin >> phonenumber;
    book->contactArray[book->index].phone_number = phone_number;
    //secret
    std::cout << "Please enter your secret: " << std::endl;
    std::string secret;
    std::cin >> secret;
    book->contactArray[book->index].secret = secret;
}

int main(void)
{
    PhoneBook book; //creat phonebook
    book.index = 0; //index of each contact
    std::string input;

    while (true)
    {
        book.showMenu();
        std::getline(std::cin, input);
        switch(input){
            case 1:{
                input = "ADD";
                //if (book.index == 8)
                    //book.index = 0;
                //Contact new_contact;
                addContact(&book);
                book.index++;
            }
            /*case 2:{
                input = "SEARCH";
                book.search_contact();
            }*/
            case 3:{
                input = "EXIT";
                std::cout << "EXIT" << std::endl;
                return 0;
                break;
            }
        }
    }
    return (0);
}
