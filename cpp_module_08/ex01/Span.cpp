/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:56 by qxia              #+#    #+#             */
/*   Updated: 2022/11/23 17:55:19 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _n(0){}

Span::Span(unsigned int N) : _n(N){
   
}

Span::Span(Span const &src){
    *this = src;
}

Span::~Span(void){
    
}

Span& Span::operator=(Span const &rhs){
    
}

unsigned int Span::addNumber(void){
    
}

unsigned int Span::shortestSpan(void){
    
}

unsigned int Span::longestSpan(void){
    
}
