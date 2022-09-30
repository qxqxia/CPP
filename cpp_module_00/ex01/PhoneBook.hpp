/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:41:06 by qxia              #+#    #+#             */
/*   Updated: 2022/09/30 15:28:45 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Contact.hpp"

#define CONTACT_MAX 8

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add_contact(int index, Contact new_contact);
		void	print_contact(void);
		int		empty_contact(int index);
	
	private:
		Contact contacts[CONTACT_MAX];
};

#endif
