/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:38:22 by qxia              #+#    #+#             */
/*   Updated: 2022/11/24 08:58:07 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
public:
    Span(void);
    Span(unsigned int N);
    Span(Span const &src);
    ~Span(void);

    Span &operator=(Span const &rhs);

    void addNumber(int);
    void addMoreNumber(unsigned int n);
    unsigned int shortestSpan(void) const;
    unsigned int longestSpan(void) const;

    unsigned int getSize(void) const;
    std::vector<int> const &getArray(void) const;
    void printArray(void) const;

private:
    unsigned int _size;
    std::vector<int> _myvector;
};

#endif