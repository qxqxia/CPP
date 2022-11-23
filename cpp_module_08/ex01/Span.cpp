/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:56 by qxia              #+#    #+#             */
/*   Updated: 2022/11/23 15:29:23 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _n(0){}

Span::Span(unsigned int N) : _n(N){
    this->myvector.reserve(N);
}

Span::Span(Span const &src){
    *this = src;
}

Span::~Span(void){
    this->myvector.clear();
}

Span& Span::operator=(Span const &rhs){
    this->_n = rhs._n;
    this->myvector
}

unsigned int Span::addNumber(void){
    
}

unsigned int Span::shortestSpan(void){
    
}

unsigned int Span::longestSpan(void){
    
}
