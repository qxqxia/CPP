/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:55:06 by qinxia            #+#    #+#             */
/*   Updated: 2022/10/11 21:59:37 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};
#endif