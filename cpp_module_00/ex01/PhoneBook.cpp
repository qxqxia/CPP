/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:41 by qxia              #+#    #+#             */
/*   Updated: 2022/09/30 16:00:48 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

std::string check_str(std::string str) {
    if (str.size() >= 10)
    {
        str = str.substr(0, 9);
        str = str + '.';
    }
    return (str);    
}

void    PhoneBook::print_contact(void) {
    //pas encore compris
    std::cout << std::setw(10) << "index" \
            << " | " << std::setw(10) << "first name" \
            << " | " << std::setw(10) << "last name" \
            << " | " << std::setw(10) << "nickname" << std::endl;
    for(int index = 0; index < 8; index++){
        std::cout << std::setw(10) << "index" \
            << " | " << std::setw(10) << check_str(this->) \
            << " | " << std::setw(10) <<  \
            << " | " << std::setw(10) <<  << std::endl;
    }
    return ;
}

int main(void){
    PhoneBook awesomebook;
    std::string input   "";
    int         index = 0;

    while (input != 'EXIT'){
        std::cout << "You have three choices(ADD, SEARCH, or EXIT):"
        std::getline(std::cin, input);
        if (input == "ADD"){
            if (index == 8)
                index = 0;
            Contact new_contact;
            awesomebook.add_contact(index, new_contact);
            index++;
        }
        else if (input == "SEARCH"){
            
        }
    }
    std::cout << endl;
    return (0);
}



