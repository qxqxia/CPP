/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:41 by qxia              #+#    #+#             */
/*   Updated: 2022/10/14 14:33:50 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
PhoneBook::PhoneBook(void) {
    return ;
}

PhoneBook::~PhoneBook(void) {
    return ;
}

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
    if (str.size() > 10)
    {
        str = str.substr(0, 9);
        str = str + '.';
    }
    return (str);
}

void PhoneBook::showAllcontact(void){
    if (this->contactArray[0].get_first_name() == "")
		return ;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
    for (int index = 0; index < 8; index++)
    {
        if (this->contactArray[index].get_first_name() == "") 
			break ;
        std::cout << "|" << std::setw(10) << index
                  << "|" << std::setw(10) << check_str(this->contactArray[index].get_first_name())
                  << "|" << std::setw(10) << check_str(this->contactArray[index].get_last_name())
                  << "|" << std::setw(10) << check_str(this->contactArray[index].get_nickname()) << "|" << std::endl;
        std::cout << "+----------+----------+----------+----------+" << std::endl;
    }
    return;
}

void PhoneBook::showSearchcontact(int index){
    if (index > 7 || this->contactArray[index].get_first_name() == "")
        return ;
    std::cout << "First name: " << this->contactArray[index].get_first_name() << std::endl;
    std::cout << "Last name: " << this->contactArray[index].get_last_name() << std::endl;
    std::cout << "Nick name: " << this->contactArray[index].get_nickname() << std::endl;
    std::cout << "Phone number: " << this->contactArray[index].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << this->contactArray[index].get_darkest_secret() << std::endl;
}

int check_num(std::string str){
    int i = 0;
    int res = 0;
    int negative = 1;

    if (str[i] == '-')
        negative = -1;
    if ( str[i] == '+' || str[i] == '-' )
         i++;
     if (!str[i])
	     return (INT_MIN);
     while(str[i]) {
          if ( str[i] < '0' || str[i] > '9' )
			  return (INT_MIN);
          res = res * 10  + (str[i] - '0');
          i++;
     }
     return (res * negative);
}

int searchContact(PhoneBook mybook){
    int search_index = -1;
    std::string input;

    if (mybook.emptyContact(0))
        std::cout << "The phonebook is empty.\n";
    else{
            mybook.showAllcontact();
            std::cout << "Please enter the index:";
            std::getline(std::cin, input);
            if (std::cin.eof())
                return (1);
            if (input.empty())
                return (0);
            search_index = check_num(input);
            if (search_index < 0 || search_index > 7)
                std::cout << "Invalid index\n";
            else if (mybook.emptyContact(search_index)) 
                std::cout << search_index << " not found.\n";
            else
                mybook.showSearchcontact(search_index); 
    }
    return (0);
}

int main(void){
    PhoneBook mybook; 
    int index = 0;
    std::string input;

    while (input != "EXIT")
    {
        mybook.showMenu();
        std::getline(std::cin, input);
        if (std::cin.eof()) 
			break ;
        if (input == "ADD")
        {
            if (index == 8)
                index = 0;
            Contact new_contact;
            if (new_contact.creat_new_contact() == 1) 
                break;
            mybook.addContact(index, new_contact);
            index++;
        }
        else if (input == "SEARCH"){
            if (searchContact(mybook) == 1)
                break;
        }
    }
    std::cout << "EXIT\n";
    return (0);
}
