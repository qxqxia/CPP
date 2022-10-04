/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:41:06 by qxia              #+#    #+#             */
/*   Updated: 2022/10/04 11:06:22 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Contact.hpp"

#define MAX 8

class PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void showMenu(void);
		void addContact(int index, Contact new_contact);
		void showContact(void);
		void exit(void);
		int emptyContact(int index);
	
	private:
		Contact contactArray[MAX];
};

#endif
