/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:44:45 by qxia              #+#    #+#             */
/*   Updated: 2022/10/04 11:06:33 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string> //string et getline
#include <cstdlib>
//#include <iomapip>

class Contact{
	public:
		Contact(void);
		~Contact(void);
		void set_first_name(std::string first_name)
		{
			this->first_name = first_name;
		}
		void set_last_name(std::string last_name)
		{
			this->last_name = last_name;
		}
		void set_nickname(std::string nickname)
		{
			this->nickname = nickname;
		}
		void set_phone_number(std::string phone_number)
		{
			this->phone_number = phone_number;
		}
		void set_secret(std::string secret)
		{
			this->secret = secret;
		}
		std::string get_first_name(void) const // cannot change when read
		{
			return (this->first_name);
		}
		std::string get_last_name(void) const
		{
			return (this->last_name);
		}
		std::string get_nickname(void) const
		{
			return (this->nickname);
		}
		std::string get_phone_number(void) const
		{
			return (this->phone_number);
		}
		std::string get_darkest_secret(void) const
		{
			return (this->secret);
		}

		int creat_new_contact(void);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;
};

#endif
