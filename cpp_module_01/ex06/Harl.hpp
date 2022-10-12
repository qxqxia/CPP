/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:44:48 by qxia              #+#    #+#             */
/*   Updated: 2022/10/12 12:55:16 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl{
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
    private:
        void debug(void);
        void info(void);
        void warninng(void);
        void error(void);
};

#endif