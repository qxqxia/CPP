/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:38:22 by qxia              #+#    #+#             */
/*   Updated: 2022/11/23 17:55:09 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>

class Span{
    public:
        Span(void);
        Span(unsigned int N);
        Span(Span const &src);
        ~Span(void);

        Span& operator=(Span const &rhs);
        
        unsigned int addNumber(void);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
    private:
        unsigned int        _n;
};

#endif