/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:41 by qxia              #+#    #+#             */
/*   Updated: 2022/09/30 12:05:44 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    return;
};

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



