/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:47:59 by qxia              #+#    #+#             */
/*   Updated: 2022/10/14 12:11:30 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string> 
#include <cstdlib>
#include <iostream>

Contact::Contact(void) {}
Contact::~Contact(void) {}

std::string get_input(std::string const message){
    std::string input;
    std::cout << message;
    std::getline(std::cin, input);
    if (std::cin.eof()){
        std::cout << "\nERROR:end of file\n";
        return (input);
    } //end of file;
    while (input.empty()){
        std::cout << "You should enter something:";
        std::getline(std::cin, input);
        if (std::cin.eof()) //why
			return "";
    }
    return (input);
}

int Contact::creat_new_contact(void){
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string secret;

    first_name = get_input("Please enter your first name:");
    if (first_name.empty())
        return (1);
    last_name = get_input("Please enter your last name:");
    if (last_name.empty())
        return (1);
    nickname = get_input("Please enter your nickname:");
    if (nickname.empty())
        return (1);
    phone_number = get_input("Please enter your phone number:");
    if (phone_number.empty())
        return (1);
    secret = get_input("Please enter your darkest secret:");
    if (secret.empty())
        return (1);
    set_first_name(first_name);
    set_last_name(last_name);
    set_nickname(nickname);
    set_phone_number(phone_number);
    set_secret(secret);
    return (0);
}