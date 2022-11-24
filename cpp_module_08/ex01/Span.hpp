/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:38:22 by qxia              #+#    #+#             */
/*   Updated: 2022/11/24 15:15:24 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <iterator>
#include <algorithm>
#include <exception>

class Span{
    public:
        Span(void);
        Span(unsigned int N);
        Span(Span const &src);
        ~Span(void);

        Span &operator=(Span const &rhs);

        void addNumber(int nbr);
        void addMoreNumber(unsigned int n);
        int shortestSpan(void) const;
        int longestSpan(void) const;

        unsigned int getSize(void) const;
        std::vector<int> const &getArray(void) const;
        void printArray(void) const;

    private:
        unsigned int        _size;
        std::vector<int>    _myvector;
};

#endif
