/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:25:29 by qxia              #+#    #+#             */
/*   Updated: 2022/10/31 16:35:00 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
    public:
        Brain(void);
        Brain(Brain const &src);
        ~Brain(void);

        Brain& operator=(Brain const &rhs);
        
        std::string ideas[100];
};

#endif